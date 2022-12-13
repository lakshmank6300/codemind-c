#include<stdio.h>
int main()
{
    int a,b,c,d,f,s=0,l=0,n;
    scanf("%d",&a);
    b=a*a;
    while(a!=0)
    {
        c=a%10;
        s=s*10+c;
        a=a/10;
    }
      n=s*s;
    while(n!=0)
    {
        c=n%10;
        l=l*10+c;
        n=n/10;
    }
    if(b==l)
    {
        printf("True");
    }
    else
    printf("False");
}