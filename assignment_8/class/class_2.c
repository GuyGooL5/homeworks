#include <stdio.h>
#include <stdlib.h>

int *createFibArray(int);

//Just for printing the new array.
void printArray(int *arr, int n)
{
	printf("{ ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("}");
}
int main()
{
	int *fibArr;
	int size;
	printf("Enter the length of fibonacci sequence: ");
	scanf("%d", &size);
	fibArr = createFibArray(size);

	printf("The fibonacci array: ");
	printArray(fibArr, size);
	return 0;
}

int *createFibArray(int size)
{
	int *arr = (int *)malloc((size) * sizeof(double));
	arr[0] = 0;
	if (size == 1)
		return arr;
	arr[1] = 1;
	if (size == 2)
		return arr;
	for (int i = 2; i < size; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr;
}
