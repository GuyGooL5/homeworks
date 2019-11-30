#include <stdio.h>

int main()
{
  double a1, q, qn=1, an, S;
  int n, i = 1;
  printf("Enter a1,q,n: ");
  scanf("%lf%lf%d", &a1, &q, &n);
  for (i; i < n; i++)
    qn *= q;

  an = a1 * (qn);
  S = (a1 * (qn * q - 1)) / (q - 1);
  printf("A%d=%.1lf, S=%.1lf", n, an, S);
  return 0;
}