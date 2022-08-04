
#include<stdio.h>
int input( char s[])
{
  int a;
  printf("enter %s",s);
  scanf("%d", &a );
  return a;
  int b;
  printf("enter %s",s);
  scanf("%d", &b);
  return b;
  int c;
  printf("enter %s",s);
  scanf("%d", &c);
  return c;
}
int find_largest(int a, int b)
{
  int c;
  if(a<b)
  {
    c=b;
  
  }
  else
  {
    c=a;
  }
  return c;
}
void output(int a, int b, int c)
{
  printf("The largest number when a= %d and b= %d is %d", a,b,c);
}
int main(void)
{
  int a, b, c;
  a= input("a");
  b= input("b");
  c= find_largest(a,b);
  output(a,b,c);
  return 0;
}