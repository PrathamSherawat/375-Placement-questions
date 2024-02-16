// Subarray Sum Divisible K
#include <bits/stdc++.h>
using namespace std;

int longestSubarrWthSumDivByK(int arr[], int N, int k)
{
		int maxl=0;
		for(int i=0;i<N;i++)
		{
			int sum1 = 0;
			for(int j=i;j<N;j++)
			{
				sum1+=arr[j];
				if(sum1 % k == 0)
				{
					maxl = max(maxl , j - i + 1);
				}	
			}
		}
		return maxl;
}
int main()
{
	int arr[] = { 2, 7, 6, 1, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;

	cout << "Length = "
		<< longestSubarrWthSumDivByK(arr, n, k);

	return 0;
}