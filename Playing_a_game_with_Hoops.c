#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a%2==0)
        b=a/2;
        else
        {
        b=a/2+1;
        }
        printf("%d
",b);
    }
}