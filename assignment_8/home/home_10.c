#include <stdio.h>
#include <stdlib.h>

int *rotateNextHighestElement(int *, int);
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
	//arbitrary values
	int arr[6] = {6, 3, 9, 10, 11, 5};
	printf("Array with next highest element shifted left: ");
	int *rotated = rotateNextHighestElement(arr, 6);
	printArray(rotated, 6);
	return 0;
}

int *rotateNextHighestElement(int *arr, int n)
{
	int *newArr = (int *)malloc(n * sizeof(int));
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[index] < arr[i])
		{
			newArr[index] = arr[i];
			i = ++index;
		}
	}
	for (; index < n; index++)
		newArr[index] = -1;
	return newArr;
}