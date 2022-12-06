#include<stdio.h>
int main()
{
    int a,b,c=0,n;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    printf("False");
}