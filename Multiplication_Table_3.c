#include<stdio.h>
int main()
{
    int a,b,c,p,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        p=a*i;
        printf("%d x %d = %d
",a,i,p);
    }
}