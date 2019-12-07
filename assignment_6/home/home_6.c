#include <stdio.h>

int inputMinRec(int);

int main()
{
	int n;
	printf("Enter a series length ");
	scanf("%d", &n);
	printf("Now enter values:\n");
	printf("The smallest number is: %d", inputMinRec(n));
	return 0;
}

int inputMinRec(int num)
{
	int n, min;
	scanf("%d", &n);
	if (num <= 0)
		return n;
	min = inputMinRec(num - 1);
	return n < min ? n : min;
}
