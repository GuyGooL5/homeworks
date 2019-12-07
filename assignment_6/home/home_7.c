#include <stdio.h>

int printDecToBinRec(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d in binary: ", n);
	printDecToBinRec(n);
	return 0;
}

int printDecToBinRec(int num)
{
	if (num > 0)
	{
		printDecToBinRec(num / 2);
		printf("%d", num % 2);
	}
}
