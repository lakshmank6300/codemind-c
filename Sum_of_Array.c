#include<stdio.h>
int main()
{
    int b,s=0,i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       s=s+a[i];
    }  
    printf("%d",s);
}