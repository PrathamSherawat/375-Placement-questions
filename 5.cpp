
//Chocolate Distribution Problem
#include <bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[], int n, int m)
{

    if (m == 0 || n == 0)
        return 0;

    sort(arr, arr + n);

    if (n < m)
        return -1;
 
    int min_diff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}
 
int main()
{
    int arr[] = { 12, 4, 7 };
    int m = 2; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}