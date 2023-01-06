#include<stdio.h>
int main()
{
    int a[100],b,s=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<=b)
        s=s+1;
        else
        s=s+2;
    }
    printf("%d",s);
}