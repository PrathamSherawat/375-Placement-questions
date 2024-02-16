// Maximum Sum Subsequence with no adjacent elements
#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& nums, int idx)
{
    if (idx >= nums.size())
        return 0;
    return max(nums[idx] + rec(nums, idx + 2),
               rec(nums, idx + 1));
}
 
int findMaxSum(vector<int> arr, int N)
{
    return rec(arr, 0);
}

int main()
{
    vector<int> arr = { 5, 5, 10, 100, 10, 5 };
    int N = arr.size();
    cout << findMaxSum(arr, N) << endl;
    return 0;
}