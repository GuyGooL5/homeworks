#include <stdio.h>
#include <stdlib.h>

int mostLeastFrequentDelta(int *, int, int, int);

int main()
{
	//arbitrary values.
	int arr1[8] = {5, 5, 1, 4, 4, 4, 7, 7},
		arr2[6] = {5, 1, 6, 6, 9, 9};
	printf("[arr1] delta of most and least frequent is? %d\n", mostLeastFrequentDelta(arr1, 8, 1, 8));
	printf("[arr2] delta of most and least frequent is? %d\n", mostLeastFrequentDelta(arr2, 6, 1, 9));
	return 0;
}
int mostLeastFrequentDelta(int *arr, int n, int a, int b)
{
	int size = b - a + 1;
	int *counter = (int *)calloc(size, sizeof(int));
	int most = 0, least = size - 1, most_freq = 0, least_ferq = n;
	for (int i = 0; i < n; i++)
		counter[arr[i] - a]++;
	for (int i = 0; i < size; i++)
	{
		if (counter[i] && counter[i] < least_ferq)
		{
			least_ferq = counter[i];
			least = i;
		}
		if (counter[size - i] && counter[size - i] > most_freq)
		{
			most_freq = counter[size - i];
			most = size - i;
		}
	}
	return most - least ;
}