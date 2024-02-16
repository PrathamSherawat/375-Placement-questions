// Count Palindromic Subsequences 
#include <cstring>
#include <iostream>
using namespace std;

int countPS(string str)
{
	int N = str.length();
	int cps[N + 1][N + 1];
	memset(cps, 0, sizeof(cps));

	for (int i = 0; i < N; i++)
		cps[i][i] = 1;

	for (int L = 2; L <= N; L++) {
		for (int i = 0; i <= N-L; i++) {
			int k = L + i - 1;
			if (str[i] == str[k])
				cps[i][k] = cps[i][k - 1] + cps[i + 1][k] + 1;
			else
				cps[i][k] = cps[i][k - 1] + cps[i + 1][k] - cps[i + 1][k - 1];
		}
	}
	return cps[0][N - 1];
}
int main()
{
	string str = "abcb";
	cout << "Total palindromic subsequence are : "<< countPS(str) << endl;
	return 0;
}