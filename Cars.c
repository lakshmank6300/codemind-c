#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  b=a%4;
  c=a/4;
  if(b!=0)
  printf("%d",c+1);
  else
  printf("%d",c);
}