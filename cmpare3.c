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
  int e;
  printf("enter %s",s);
  scanf("%d", &e);
  return e;
}
int find_largest(int a, int b, int c)
{
  int e;
  if(a>b && a>c)
  {
    e=a;
  }
  else if(b>a && b>c)
  {
    e=b;
  }
  else if(a==b && a>c)
  {
    e=a;
  }
  else if(b==c && b>a)
  {
    e=b;
  }
  else
  {
    e=c;
  }
  return e;
}
void output(int a, int b, int c, int e)
{
  printf("The largest number when a= %d and b= %d c= %d is %d", a,b,c,e);
}
int main(void)
{
  int a, b, c, e;
  a= input("a");
  b= input("b");
  c= input("c");
  e= find_largest(a,b,c);
  output(a,b,c,e);
  return 0;
}