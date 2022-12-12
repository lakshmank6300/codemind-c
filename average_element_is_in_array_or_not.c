#include<stdio.h>
int main()
{
    int s=0,n,k=0,ave,a[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s/n==a[i])
        {
        k=1;
        break;
        }
    }
    if(k==1)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
}