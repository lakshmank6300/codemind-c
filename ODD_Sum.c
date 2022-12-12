#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        s=s+a[i];
    }
    printf("%d",s);
}