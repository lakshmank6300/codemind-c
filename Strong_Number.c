#include<stdio.h>
int main()
{
    int a,p,f=1,s=0,b,n,i;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        b=a%10;
        f=1;
        for(i=1;i<=b;i++)
        {
            f=f*i;
        }
        s=s+f;
        a=a/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}