#include<stdio.h>
int main()
{
    int a,b,s=0,p=1,i;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        s=s+b;
        p=p*b;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    printf("Not Spy Number");
}