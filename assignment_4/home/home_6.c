#include <stdio.h>
int main()
{
	int digit, output = 0;
	printf("Enter binary digit or any other number to end sequence.\nFirst digit: ");
	scanf("%d", &digit);
	while (digit == 0 || digit == 1)
	{
		output = output << 1 | digit;
		printf("Next digit: ");
		scanf("%d", &digit);
	}
	printf("%d", output);
	return 0;
}
