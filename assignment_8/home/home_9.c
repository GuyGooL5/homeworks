#include <stdio.h>
#include <stdlib.h>

void rotateRight(int *, int, int);
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
	int arr1[6] = {1, 6, 2, 3, 4, 2},
		arr2[6] = {1, 6, 2, 3, 4, 2},
		arr3[6] = {1, 6, 2, 3, 4, 2},
		arr4[6] = {1, 6, 2, 3, 4, 2};
	rotateRight(arr1, 6, 3);
	rotateRight(arr2, 6, 1);
	rotateRight(arr3, 6, 6);
	rotateRight(arr4, 6, 0);
	printf("\narr rotated %d times: ", 3);
	printArray(arr1, 6);
	printf("\narr rotated %d times: ", 1);
	printArray(arr2, 6);
	printf("\narr rotated %d times: ", 6);
	printArray(arr3, 6);
	printf("\narr rotated %d times: ", 0);
	printArray(arr4, 6);
	return 0;
}

void rotateRight(int *arr, int n, int amount)
{
	if (amount == 0 || amount == n)
		return;
	int *tmp = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		tmp[i] = arr[i];
	for (int i = 0; i < n; i++)
		arr[(i + amount) % n] = tmp[i];
	free(tmp);
}
