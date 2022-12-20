#include<stdio.h>
int main()
{
    int i,j,n,p;
    scanf("%d",&n);
    p=n+1;
    for(i=1;i<=n;i++)
    {
        p--;
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1 || i==j)
            {
                printf("x");
            }
            else
            {
            	printf("0");
			}
        }
        printf("
");
    }
}