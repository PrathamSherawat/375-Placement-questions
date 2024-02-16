// 3Sum

#include <bits/stdc++.h>
using namespace std;
struct triplet
{
	int first, second, third;
};

int findTriplets(int nums[], int n, int sum)
{
	int i, j, k;

	vector<triplet> triplets;
	unordered_set<string> uniqTriplets;
	string temp;
	triplet newTriplet;

	sort(nums, nums + n);
	for (i = 0; i < n - 2; i++)
	{
		j = i + 1;
		k = n - 1;

		while (j < k) {
			if (nums[i] + nums[j] + nums[k] == sum)
			{
				temp = to_string(nums[i]) + " : "
					+ to_string(nums[j]) + " : "
					+ to_string(nums[k]);
				if (uniqTriplets.find(temp) == uniqTriplets.end()) {
					uniqTriplets.insert(temp);
					newTriplet.first = nums[i];
					newTriplet.second = nums[j];
					newTriplet.third = nums[k];
					triplets.push_back(newTriplet);
				}

				j++;
				k--;
			}

			else if (nums[i] + nums[j] + nums[k] > sum)
				k--;

			else
				j++;
		}
	}

	if (triplets.size() == 0)
		return 0;

	for (i = 0; i < triplets.size(); i++) {
		cout << "[" << triplets[i].first << ", " << triplets[i].second << ", " << triplets[i].third << "], ";
	}
}

int main()
{
	int nums[] = { 12, 3, 6, 1, 6, 9 };
	int n = sizeof(nums) / sizeof(nums[0]);
	int sum = 24;

	if (!findTriplets(nums, n, sum))
		cout << "No triplets can be formed.";

	return 0;
}