#include <stdio.h>

double powerRec(double, int);

int main()
{
	double x;
	int n;
	printf("Enter a real number and it's power: ");
	scanf("%lf%d", &x, &n);
	printf("%.03lf to the %d = %.03lf", x, n, powerRec(x, n));
	return 0;
}

double powerRec(double x, int n)
{
	if (n <= 0)
		return 1;
	return  (n%2?x:1)*powerRec(x * x, n / 2);
}