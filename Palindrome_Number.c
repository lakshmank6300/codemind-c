#include<stdio.h>
int main()
{
    int n,s,r,k,a,b,i;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    scanf("%d",&a);
    s=0;
    n=a;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(a==s)
    {
        printf("True
");
    }
    else
    printf("False
");
       }
}