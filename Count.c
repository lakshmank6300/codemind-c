#include<stdio.h>
int main()
{
    int a[100],b,c=0,n,i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        k++;
    }
    printf("%d %d",c,k);
}