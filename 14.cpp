// Find Minimum in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n)
{
    int min_ele = arr[0];
 
    for (int i = 0; i < n; i++) {
        if (arr[i] < min_ele) {
            min_ele = arr[i];
        }
    }
 
    return min_ele;
}

int main()
{
    int arr[] = { 5, 6, 1, 2, 3, 4 };
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << findMin(arr, N) << endl;
    return 0;
}