#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        s=s+a[i];
    }
    printf("%d",s);
}