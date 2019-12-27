#include <stdio.h>

void sortThree(int *, int *, int *);

int main()
{
	int num1, num2, num3;
	printf("Enter three values: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sortThree(&num1, &num2, &num3);
	printf("The numbers sorted are: %d %d %d", num1, num2, num3);
	return 0;
}

void sortThree(int *num1Ptr, int *num2Ptr, int *num3Ptr)
{
	int max = *num1Ptr > *num2Ptr ? *num1Ptr : *num2Ptr;
	max = max > *num3Ptr ? max : *num3Ptr;
	int min = *num1Ptr < *num2Ptr ? *num1Ptr : *num2Ptr;
	min = min < *num3Ptr ? min : *num3Ptr;
	*num2Ptr += *num1Ptr + *num3Ptr - min - max;
	*num1Ptr = max;
	*num3Ptr = min;
}
