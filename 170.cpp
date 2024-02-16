// Lexicographically smallest array-k consecutive swaps
#include<bits/stdc++.h>
using namespace std ;
void minimizeWithKSwaps(int arr[], int n, int k)
{
    for (int i = 0; i<n-1 && k>0; ++i)
    {
        int pos = i;
        for (int j = i+1; j<n ; ++j)
        {
            if (j-i > k)
                break;
            if (arr[j] < arr[pos])
                pos = j;
        }
        for (int j = pos; j>i; --j)
            swap(arr[j], arr[j-1]);
        k -=  pos-i;
    }
}
int main()
{
    int arr[] = {7, 6, 9, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    minimizeWithKSwaps(arr, n, k);
    for (int i=0; i<n; ++i)
        cout << arr[i] <<" ";
}