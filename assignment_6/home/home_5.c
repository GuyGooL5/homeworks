#include <stdio.h>

int inputMaxRec(int);

int main()
{
	int n;
	printf("Enter a series length ");
	scanf("%d", &n);
	printf("Now enter values:\n");
	printf("The largest number is: %d", inputMaxRec(n));
	return 0;
}

int inputMaxRec(int num)
{
	int n, max;
	scanf("%d", &n);
	if (num <= 1)
		return n;
	max = inputMaxRec(num - 1);
	return n > max ? n : max;
}
