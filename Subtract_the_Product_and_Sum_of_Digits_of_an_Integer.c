#include<stdio.h>
int main()
{
    int a,b,c=0,p=1;
    scanf("%d",&a);
    into:
    while(a!=0)
    {
        b=a%10;
        c=c+b;
        p=p*b;
        a=a/10;
    }
   printf("%d",p-c);
}