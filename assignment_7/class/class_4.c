#include <stdio.h>

int hasSumOfNeighbors(int *, int);

int main()
{
	//arbitrary values
	int arr1[6] = {1, 2, 7, 5, 9, 6},
		arr2[6] = {1, 2, 8, 5, 9, 6};
	printf("[Arr 1] Has sum of neighbors : %d\n", hasSumOfNeighbors(arr1, 6));
	printf("[Arr 2] Has sum of neighbors : %d\n", hasSumOfNeighbors(arr2, 6));
	return 0;
}

int hasSumOfNeighbors(int *arr, int n)
{
	for (int i = 1; i < n - 2; i++)
		if (arr[i - 1] + arr[i + 1] == arr[i])
			return 1;
	return 0;
}