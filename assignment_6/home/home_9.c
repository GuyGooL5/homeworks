#include <stdio.h>

int decreaseDigitsRec(int);
int increaseDigitsRec(int);

int main()
{
	int n ;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("the number with each digit decreased: %d\n", decreaseDigitsRec(n));
	printf("the number with each digit increased: %d\n", increaseDigitsRec(n));
	return 0;
}

int decreaseDigitsRec(int num)
{
	if (num <= 10)
		return num - 1;
	return (num % 10 ? num % 10 - 1 : 9) + decreaseDigitsRec(num / 10) * 10;
}
int increaseDigitsRec(int num)
{
	if (num < 10)
		return num % 10 - 9 ? num + 1 : 0;
	return (num % 10 - 9 ? num % 10 + 1 : 0) + increaseDigitsRec(num / 10) * 10;
}
