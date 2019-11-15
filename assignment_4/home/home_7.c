
/*
הערה:
שימו לב שהתוצאה יוצאת הפוך, עוד לא יודע איך לתקן את זה אשמח לעזרה :)
*/

#include <stdio.h>

int main()
{
  int n;
  printf("Enter decimal number: ");
  scanf("%d", &n);
  while (n)
  {
    printf("%d%c", (n % 2), n / 2 ? ',' : 0);
    n /= 2;
  }
  return 0;
}