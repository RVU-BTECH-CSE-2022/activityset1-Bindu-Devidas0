#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter number a : ");
  scanf("%d", &a);
  printf("Enter number b : ");
  scanf("%d", &b);
  printf("Enter number c : ");
  scanf("%d", &c);

  if (a > b && a > c)
    printf("a is largest ");
  else if (b > a && b > c)
    printf("b is largest ");
  else if (c > a && c > b)
    printf("c is largest ");
  else if (a = b && b > c)
    printf("a and b are the largest");
  else if (b = c && c > a)
    printf("b and c are the largest");
  else
    printf("No largest number found");

  return 0;
}