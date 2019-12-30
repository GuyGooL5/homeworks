#include <stdio.h>
#include <stdlib.h>

int *createLucasArr(int);

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
	int *lucasArr;
	int size;
	printf("Enter the length of Lucas sequence: ");
	scanf("%d", &size);
	lucasArr = createLucasArr(size);

	printf("The Lucas sequence array array: ");
	printArray(lucasArr, size);
	return 0;
}

int *createLucasArr(int size)
{
	int *arr = (int *)malloc((size) * sizeof(double));
	arr[0] = 2;
	if (size == 1)
		return arr;
	arr[1] = 1;
	if (size == 2)
		return arr;
	for (int i = 2; i < size; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr;
}
