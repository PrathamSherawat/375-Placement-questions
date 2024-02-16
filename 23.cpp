// Space Optimization Using Bit Manipulations

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 2, b = 10;
	int size = abs(b - a) + 1;
	int* array = new int[size];
	for (int i = a; i <= b; i++)
		if (i % 2 == 0 || i % 5 == 0)
			array[i - a] = 1;

	cout << "MULTIPLES of 2 and 5:\n";
	for (int i = a; i <= b; i++)
		if (array[i - a] == 1)
			cout << i << " ";

	return 0;
}
