#include<stdio.h>
int main()
{
    long int a[100],b,c,s=0,n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        s=s+a[i];
    }
    printf("%ld",s);
}