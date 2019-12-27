#include <stdio.h>

void printArrRec(int *, int);
void printArrReverseRec(int *, int);

int main()
{
	//arbitrary values
	int arr[7] = {1, 2, 5, 9, 20, 25, -5};
	printf("Printed normally: ");
	printArrRec(arr, 7);
	printf("\nPrinted reversed: ");
	printArrReverseRec(arr, 7);

	return 0;
}

void printArrRec(int *arr, int n)
{
	if (arr < arr + n)
		printf("%d ", *arr), printArrRec(arr + 1, n - 1);
}

void printArrReverseRec(int *arr, int n)
{
	if (arr < arr + n)
		printArrReverseRec(arr + 1, n - 1), printf("%d ", *arr);
}