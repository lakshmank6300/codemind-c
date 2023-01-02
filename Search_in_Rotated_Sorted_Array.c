#include<stdio.h>
int main()
{
    int a[100],b,c,n,i,k=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            printf("%d",i);
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}