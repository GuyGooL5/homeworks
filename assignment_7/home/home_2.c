#include <stdio.h>

double avgSmallerDigits(int, int, int *);

int main()
{
	int n, digit, count;
	double avg;
	printf("Enter a digit: ");
	scanf("%d", &digit);
	printf("Enter an int to find avarage of smaller digits than %d: ", digit);
	scanf("%d", &n);
	avg = avgSmallerDigits(n, digit, &count);
	printf("[Avarage] %.3lf\n[Count] %d", avg, count);
	return 0;
}

double avgSmallerDigits(int n, int digit, int *countPtr)
{
	*countPtr = 0;
	int sum = 0;
	while (n)
	{
		if ((n % 10) < digit)
		{
			sum += n % 10;
			(*countPtr)++;
		}
		n /= 10;
	}
	return *countPtr ? (double)sum / *countPtr : 0;
}
