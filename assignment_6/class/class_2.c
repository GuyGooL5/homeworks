#include <stdio.h>

int fibonacci(int);
int fibonacciRec(int);

int main()
{
	int n;
	printf("Enter an index to find it's fibonacciReconacci seq value: ");
	scanf("%d", &n);
	printf("Fibonnaci at %d is:\n%d [Non-Recursive]\n%d [Recursive]", n, fibonacci(n), fibonacciRec(n));
	return 0;
}
int fibonacci(int n)
{
	int a = 0, b = 1;
	for (int i = 0; i < n; i++)
	{
		b = a + b;
		a = b - a;
	}
	return a;
}
int fibonacciRec(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}