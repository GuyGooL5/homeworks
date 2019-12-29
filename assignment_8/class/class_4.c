#include <stdio.h>
#include <stdlib.h>

int isFreqEqNum(int *, int, int);

int main()
{
	//arbitrary values.
	int arr1[10] = {1, 4, 4, 3, 4, 2, 2, 3, 3, 4},
		arr2[10] = {1, 4, 4, 3, 4, 2, 2, 1, 3, 4};
	printf("[arr1] are the numbers the same as their frequency? [%c]\n", isFreqEqNum(arr1, 10, 4) ? 'T' : 'F');
	printf("[arr2] are the numbers the same as their frequency? [%c]\n", isFreqEqNum(arr2, 10, 4) ? 'T' : 'F');
	return 0;
}

int isFreqEqNum(int *arr, int n, int k)
{
	int *counter = (int *)calloc(++k, sizeof(int));
	for (int i = 0; i < n; i++)
		counter[arr[i]]++;
	for (int i = 0; i < k; i++)
		if (counter[i] != i)
			return 0;
	return 1;
}
