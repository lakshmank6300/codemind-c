#include<stdio.h>
int main()
{
    double a,s,i;
    scanf("%lf",&a);
    for(i=1;i<=a;i++)
    {
        s=1/i+s;
    }
    printf("%.2lf",s);
}