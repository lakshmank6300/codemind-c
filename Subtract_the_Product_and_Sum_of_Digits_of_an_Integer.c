#include<stdio.h>
int main()
{
    int a,r,s=0,b,d,p=1;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        p=p*r;
        a=a/10;
    }
    printf("%d",p-s);
    
}