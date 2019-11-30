#include <stdio.h>
int main()
{
  int n, tmp, sum_odd = 0, sum_even = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n)
  {
    tmp = n % 10;
    if (tmp % 2)
      sum_odd += tmp;
    else
      sum_even += tmp;
    n /= 10;
  }
  printf("%d", sum_even - sum_odd);
  return 0;
}