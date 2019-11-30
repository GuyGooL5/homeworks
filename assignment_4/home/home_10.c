#include <stdio.h>
#include <limits.h>
int main()
{
  int n, i = 0, tmp, max = 0, max_pos, min = INT_MAX, min_pos;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n)
  {

    tmp = n % 10;
    if (min >= tmp)
    {
      min = tmp;
      min_pos = i;
    }
    if (max <= tmp)
    {
      max = tmp;
      max_pos = i;
    }
    n /= 10;
    i++;
  }
  printf("Max=%d, at position: %d, Min=%d, at position: %d", max, max_pos, min, min_pos);
  return 0;
}