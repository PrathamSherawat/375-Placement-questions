// // C++ program to rearrange characters in a string
// so that no two adjacent characters are same.

#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

struct Key {

	int freq;
	char ch;
	bool operator<(const Key& k) const
	{
		return freq < k.freq;
	}
};

void rearrangeString(string str)
{
	int N = str.length();
	int count[MAX_CHAR] = { 0 };
	for (int i = 0; i < N; i++)
		count[str[i] - 'a']++;

	priority_queue<Key> pq;
	for (char c = 'a'; c <= 'z'; c++) {
		int val = c - 'a';
		if (count[val]) {
			pq.push(Key{ count[val], c });
		}
	}
	str = "";
	Key prev{ -1, '#' };
	while (!pq.empty()) {
		Key k = pq.top();
		pq.pop();
		str = str + k.ch;
		if (prev.freq > 0)
			pq.push(prev);
		(k.freq)--;
		prev = k;
	}
	if (N != str.length())
		cout << " Not possible " << endl;
	else
		cout << str << endl;
}

int main()
{
	string str = "bbbaa";
	rearrangeString(str);
	return 0;
}
