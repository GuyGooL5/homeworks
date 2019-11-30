#include <stdio.h>

int main()
{
  int n, i = 2;
  double s = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (!(n % 2))
  {
    printf("The number is even, terminating program");
    return 0;
  }
  for (i; i <= n; i++)
    s += ((double)i / ++i);
  printf("%lf", s);
  return 0;
}