#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b=0,c,d;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",a[i]);
        }
        else if(a[i]==1)
        {
         b++;
        }
    }
    for(c=1;c<=b;c++)
    {
        printf("1 ");
    }
}