#include <stdio.h>

int derivative(int, int *, int *);

int main()
{
	int x, c, n, ans;
	printf("Enter x, c, n accordingly ");
	scanf("%d%d%d", &x, &c, &n);
	ans = derivative(x, &c, &n);
	printf("The derivative's c is %d, n is %d, and answer is %d", c, n, ans);
	return 0;
}

int derivative(int x, int *c, int *n)
{
	(*c) *= *n;
	int tmp_n = --(*n);
	int power = 1;
	while (tmp_n)
	{
		power *= tmp_n % 2 ? x : 1;
		x *= x;
		tmp_n /= 2;
	}
	return *c * power;
}
