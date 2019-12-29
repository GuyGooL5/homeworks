#include <stdio.h>

int mostFrequentNumber(int *, int, int *);

int main()
{
	//arbitrary values.
	int arr[7] = {1, 6, 3, 3, 6, 3, 3};
	int occurrences = 0;
	int mostFrequent = mostFrequentNumber(arr, 7, &occurrences);
	printf("The most frequent number is %d, with %d occurrences.", mostFrequent, occurrences);
	return 0;
}

int mostFrequentNumber(int *arr, int n, int *occurrences)
{
	*occurrences = 0;
	int counter[10] = {0}, most_occurred_number = -1;
	for (int i = 0; i < n; i++)
		counter[arr[i]]++;
	for (int i = 0; i < 10; i++)
		if (counter[i] > *occurrences)
		{
			*occurrences = counter[i];
			most_occurred_number = i;
		}
	return most_occurred_number;
}
