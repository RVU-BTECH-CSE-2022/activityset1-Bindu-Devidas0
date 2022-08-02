#include<stdio.h>
int main(void)
{
  int x,y,result;
  x = input("enter first number");
  y = input("enter second number");
  result = add(x,y);
  output(x,y,result);
  return 0;
  
}

int add(int no1, int no2)
{
  int res;
  res = no1+no2;
  return res;
}
int input(char s[])
{
  int x1;
  printf("enter %s", s);
  scanf("%d", &x1);
  return x1;
}
void output(int x,int y,int result)
{
  printf("\nThe result for addition of %d, %d is %d is",x,y,result);
}