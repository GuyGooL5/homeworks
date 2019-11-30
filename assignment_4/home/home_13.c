#include <stdio.h>
int main()
{
  int n, tmp, mult_odd = 1, mult_even = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n)
  {
    tmp = n % 10;
    if (tmp % 2)
      mult_odd *= tmp;
    else
      mult_even *= tmp;
    n /= 10;
  }
  printf("%.2lf", (double)mult_even / mult_odd);
  return 0;
}