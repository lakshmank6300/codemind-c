#include<stdio.h>
int main()
{
    int a[100],b,c,n,k=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            k++;
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    while(k--)
    {
        printf("0 ");
    }
}