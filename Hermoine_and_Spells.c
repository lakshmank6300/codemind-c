#include<stdio.h>
int main()
{
    int a,b,c,l;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<=c)
    {
        l=b+c;
    }
    else if(b<=a && b<=c)
    {
        l=a+c;
    }
    else
    {
        l=a+b;
    }
    printf("%d",l);
}