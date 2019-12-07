#include <stdio.h>

int isDigitsSumEvenRec(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The sum of the digits is even <-> %c", isDigitsSumEvenRec(n) ? 'T' : 'F');
	return 0;
}

int isDigitsSumEvenRec(int num)
{
	if (num <= 10)
		return num % 2 == 0;
	return (num % 2  + isDigitsSumEvenRec(num / 10)) % 2 ;
}
