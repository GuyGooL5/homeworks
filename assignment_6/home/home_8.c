#include <stdio.h>

void charRepeatRec(int, char, char);

int main()
{
	int n;
	char c1, c2;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter 2 chars: ");
	scanf(" %c %c", &c1, &c2);
	charRepeatRec(n, c1, c2);
	return 0;
}

void charRepeatRec(int num, char c1, char c2)
{
	if (num >= 1)
	{
		printf("%c", c1);
		charRepeatRec(num - 1, c1, c2);
		printf("%c%c", c2, c2);
	}
}
