#include<stdio.h>
int main()
{
    int a,i,s=0,p=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+(i*i);
        p=p+i;
    }
    printf("%d",(p*p)-s);
}