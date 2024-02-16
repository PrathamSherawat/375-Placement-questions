// Print Subarrays with 0 Sum
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > findSubArrays(int arr[], int n)
{
	vector<pair<int, int> > output;
	for (int i = 0; i < n; i++) {
		int prefix = 0;
		for (int j = i; j < n; j++) {
			prefix += arr[j];
			if (prefix == 0)
				output.push_back({ i, j });
		}
	}

	return output;
}

void print(vector<pair<int, int> > output)
{
	for (auto it = output.begin(); it != output.end(); it++)
		cout << "Subarray found from Index " << it->first
			<< " to " << it->second << endl;
}

int main()
{
	int arr[] = { 6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	vector<pair<int, int> > output = findSubArrays(arr, n);
	if (output.size() == 0) {
		cout << "No subarray exists";
	}
	else {
		print(output);
	}
	return 0;
}