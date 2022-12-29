#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d%d",&b,&c);
        d=b/10*c;
        printf("%d
",d);
    }
}