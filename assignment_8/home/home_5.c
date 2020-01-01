#include <stdio.h>
#include <stdlib.h>

int *createMissingNumbersArr(int *, int, int *);

//Just for printing the new array.
void printArray(int *arr, int n)
{
	int i = 0;
	printf("{");
	for (i; i < n - 1; i++)
		printf("%d,", arr[i]);
	printf("%d", arr[i]);
	printf("}");
}
int main()
{
	int arr[6] = {0, 1, 1, 0, 3, 5};
	int missingsArrSize;
	int *missingsArr = createMissingNumbersArr(arr, 6, &missingsArrSize);
	printf("The array with missing numbers between 0 - %d: ", 6);
	printArray(missingsArr, missingsArrSize);
	return 0;
}

int *createMissingNumbersArr(int *arr, int n, int *newSize)
{
	*newSize = 0;
	n++;
	if (n == 1)
		return (int *)calloc(++(*newSize), sizeof(int));
	int *counter = (int *)calloc(n, sizeof(int));
	int *missingsArr = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		counter[arr[i]]++;
	for (int i = 0; i < n; i++)
		if (!counter[i])
			missingsArr[(*newSize)++] = i;
	free(counter);
	return (int *)realloc(missingsArr, (*newSize) * sizeof(int));
}