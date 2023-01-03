#include<stdio.h>
int main()
{
    int a[100],b,i,j,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[j]<a[i])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}