#include <stdio.h>

int isDigitMatchParityRec(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The digits parity match evenness <-> %c", isDigitMatchParityRec(n) ? 'T' : 'F');
	return 0;
}

int isDigitMatchParityRec(int num)
{
	if (num <= 100)
		return (num % 2 == 0) * ((num / 10 > 0) ? ((num / 10) % 2) : 1);
	return isDigitMatchParityRec(num / 100) * ((num % 2) == 0) * ((num / 10) % 2);
}
