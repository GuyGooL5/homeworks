#include <stdio.h>
#include <stdlib.h>

int maxSumOfOccourrences(int *, int);

int main()
{
	//arbitrary values
	int arr_1[9] = {1, 4, 2, 2, 3, 3, 2, 2, 7},
		arr_2[9] = {1, 4, 2, 2, 3, 3, 2, 2, 9},
		arr_3[9] = {1, 4, 2, 2, 3, 3, 2, 2, 4};
	printf("[Arr1] element with highest sum: %d\n", maxSumOfOccourrences(arr_1, 9));
	printf("[Arr2] element with highest sum: %d\n", maxSumOfOccourrences(arr_2, 9));
	printf("[Arr3] element with highest sum: %d\n", maxSumOfOccourrences(arr_3, 9));
	return 0;
}

int maxSumOfOccourrences(int *arr, int n)
{
	int *sum = (int *)calloc(n - 1, sizeof(int)), highestSum = 0, highestElement = 0;
	for (int i = 0; i < n; i++)
		sum[arr[i]] += arr[i];
	for (int i = 1; i < n - 1; i++)
		if (sum[i] >= highestSum)
		{
			highestSum = sum[i];
			highestElement = i;
		}
	free(sum);
	return highestElement;
}