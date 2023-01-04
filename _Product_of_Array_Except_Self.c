#include<stdio.h>
int main()
{
    int i,j,n,s=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                s=s*a[j];
            }
        }
        printf("%d ",s);
    }
}