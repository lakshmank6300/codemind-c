#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n+64;i>64;i--)
    {
        for(j=64;j<=i-1;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}