#include <stdio.h>
#include <stdlib.h>

int mostFrequentElement(int *, int);

int main()
{
	//arbitrary values
	int arr_1[5] = {1, 1, 3, 2, 1},
		arr_2[5] = {1, 1, 3, 2, 2};
	printf("[Arr1] most frequent element: %d\n", mostFrequentElement(arr_1, 5));
	printf("[Arr2] most frequent element: %d\n", mostFrequentElement(arr_2, 5));
	return 0;
}

int mostFrequentElement(int *arr, int n)
{
	int *counter = (int *)calloc(n, sizeof(int)), mostFrequent = 0;
	for (int i = 0; i < n; i++)
		counter[arr[i]]++;
	for (; mostFrequent < n; mostFrequent++)
		if (counter[mostFrequent] > n / 2)
			break;
	free(counter);
	return mostFrequent >= n ? -1 : mostFrequent;
}