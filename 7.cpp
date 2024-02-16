//next permutation

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& arr)
{
    next_permutation(arr.begin(),arr.end());
}

int main()
{

    vector<int> arr = { 1, 2, 3};
    nextPermutation(arr);

    for (auto i : arr) {
        cout << i << " ";
    }
 
    return 0;
}