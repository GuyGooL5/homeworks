#include <stdio.h>
#include <stdlib.h>

int *filterParity(int *, int, int, int *);
int *filterParityRealloc(int *, int, int, int *);

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
	int arr[5] = {1, 8, 2, 5, 11};
	int newArrSize;
	int *newArr = filterParity(arr, 5, 1, &newArrSize);
	printf("The new array with even numbers only: ");
	printArray(newArr, newArrSize);
	printf("\nThe new array with odd numbers only [realloc method]: ");
	free(newArr);
	newArr = filterParityRealloc(arr, 5, 0, &newArrSize);
	printArray(newArr, newArrSize);
	return 0;
}

int *filterParity(int *arr, int n, int isEven, int *newSize)
{
	*newSize = 0;
	for (int i = 0; i < n; i++)
		if ((isEven == 1) == (arr[i] % 2 == 0))
			(*newSize)++;
	int *newArr = (int *)malloc(*newSize * sizeof(int));
	for (int i = 0, j = 0; i < n; i++)
	{
		if ((isEven == 1) == (arr[i] % 2 == 0))
		{
			newArr[j] = arr[i];
			j++;
		}
	}
	return newArr;
}

//method 2
int *filterParityRealloc(int *arr, int n, int isEven, int *newSize)
{
	*newSize = 0;
	int *newArr = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		if ((isEven == 1) == (arr[i] % 2 == 0))
		{
			newArr[*newSize] = arr[i];
			(*newSize)++;
		}
	return (int *)realloc(newArr, *newSize * sizeof(int));
}
