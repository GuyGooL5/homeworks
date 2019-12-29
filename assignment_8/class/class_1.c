#include <stdio.h>
#include <stdlib.h>

double *createDoubleArray(int);

int main()
{
	double *arr;
	int size;
	printf("Enter the new array's size: ");
	scanf("%d", &size);
	arr = createDoubleArray(size);

	//doesn't help too much, you could always debug to see the array.
	printf("Created new Array successfully at memory: %d", &arr);
	return 0;
}

double *createDoubleArray(int size)
{
	double *arr = (double *)malloc(size * sizeof(double));
	for (int i = 0; i < size; i++)
	{
		printf("Enter value for arr[%d]: \n", i);
		scanf("%lf", arr + i);
	}
	return arr;
}
