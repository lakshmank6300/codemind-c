#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    if(n>=3 && n<=100)
    {
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=1;i<=n;i++)
    {
     for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    printf("The pattern is not possible");
}