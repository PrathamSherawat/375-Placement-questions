// Kth-Largest Element in an Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 4;

	set<int> s(arr, arr + N);

	set<int>::iterator itr = s.begin();

	advance(itr, K - 1);

	cout << *itr << "\n";

	return 0;
}
