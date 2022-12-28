#include<stdio.h>
int main()
{
    int a,b,c,r,s=0,n;
    scanf("%d",&a);
    b=a%1000;
    n=b;
    while(b!=0)
{
    r=b%10;
    s=s*10+r;
    b=b/10;
}
 printf("%d",a-n+s);
}