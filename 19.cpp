//Kth - Smallest Element

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int kthSmallest(int arr[], int N, int K)
{
	qsort(arr, N, sizeof(int), cmpfunc);
	return arr[K - 1];
}

int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 2;

	printf("K'th smallest element is %d",
		kthSmallest(arr, N, K));
	return 0;
}
