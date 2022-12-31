#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        b=a%10;
        i=log10(a);
        c=pow(10,i);
        d=a/c;
        printf("%d
",d+b);
    }
}