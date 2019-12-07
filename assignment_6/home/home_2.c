#include <stdio.h>

int lucasSeries(int);
int lucasSeriesRec(int);

int main()
{
	int n;
	printf("Enter a length of 'Lucas Series' to find it's sum: ");
	scanf("%d", &n);
	printf("The sum for %d is:\n%d [Non-Recursive]\n%d [Recursive]", n, lucasSeries(n), lucasSeriesRec(n));
	return 0;
}

int lucasSeries(int n)
{
	int a = 2, b = 1;
	for (int i = 0; i < n; i++)
	{
		b += a;
		a = b - a;
	}
	return a;
}
int lucasSeriesRec(int n)
{
	if (n == 0)
		return 2;
	if (n == 1)
		return 1;
	return lucasSeriesRec(n - 1) + lucasSeriesRec(n - 2);
}