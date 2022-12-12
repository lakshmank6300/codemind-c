#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    into:
    while(a!=0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    if(c>9)
    {
         a=c;
        c=0;
        goto into;
    }
    else 
    printf("%d",c);
}