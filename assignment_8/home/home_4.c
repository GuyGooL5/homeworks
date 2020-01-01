#include <stdio.h>
#include <stdlib.h>

void multEachElemExceptSelf(int *, int);
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
	int arr[5] = {1, 2, 2, 4, 1};
	printf(" The array with each element multiplied with the whole array except itself: ");
	multEachElemExceptSelf(arr, 5);
	printArray(arr, 5);
	return 0;
}

void multEachElemExceptSelf(int *arr, int n)
{
	int *tmp = (int *)malloc(n * sizeof(int));
	int product=1;
	for (int i = 0; i < n; i++, product = 1)
	{
		tmp[i] = arr[i];
		for (int j = 0; j < n; j++)
			if (i != j)
				product *= i < j ? arr[j] : tmp[j];
		arr[i] = product;
	}
	free(tmp);
}
