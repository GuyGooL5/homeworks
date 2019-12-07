#include <stdio.h>

int series(int);
int seriesRec(int);

int main()
{
	int n;
	printf("Enter n to see the series' value at that n: ");
	scanf("%d", &n);
	printf("Series at %d is:\n%d [Non-Recursive]\n%d [Recursive]", n, series(n), seriesRec(n));
	return 0;
}

int series(int n)
{
	if (n >= 0 && n < 3)
		return 1;
	int a = 1, b = 1, c = 1;
	int tmp_1, tmp_2;
	for (int i = 3; i <= n; i++)
	{
		tmp_1 = a;
		tmp_2 = b;
		a = b;
		b = c;
		c += i % 2 ? tmp_1 : tmp_1 + tmp_2;
	}
	return c;
}
int seriesRec(int n)
{
	if (n >= 0 && n < 3)
		return 1;
	return ((n % 2) ? 0 : seriesRec(n - 2)) + seriesRec(n - 1) + seriesRec(n - 3);
}