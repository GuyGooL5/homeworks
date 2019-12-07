#include <stdio.h>

int pellSeries(int);
int pellSeriesRec(int);

int main()
{
	int n;
	printf("Enter a length of 'Pell Series' to find it's sum: ");
	scanf("%d", &n);
	printf("The sum for %d is:\n%d [Non-Recursive]\n%d [Recursive]", n, pellSeries(n), pellSeriesRec(n));
	return 0;
}

int pellSeries(int n)
{
	int a = 0, b = 1, tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = b;
		b = b * 2 + a;
		a = tmp;
	}
	return a;
}
int pellSeriesRec(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return 2 * pellSeriesRec(n - 1) + pellSeriesRec(n - 2);
}