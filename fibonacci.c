#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,f,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
         printf("%d ",a);
        a=b;
        b=c;
     
    }
}