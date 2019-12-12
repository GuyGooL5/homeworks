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
	if (num < 10)
		return (num + 9) % 10;
	return (num % 10 + 9) % 10 + decreaseDigitsRec(num / 10) * 10;
}
int increaseDigitsRec(int num)
{
	if (num < 10)
		return (num + 1) % 10;
	return (num % 10 + 1) % 10 + increaseDigitsRec(num / 10) * 10;
}
