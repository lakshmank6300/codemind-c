#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int od[100];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&od[i]);
        if(od[i]%2==0)
        printf("%d ",od[i]);
    }
    for(i=1;i<=a;i++)
    {
        if(od[i]%2==1)
        printf("%d ",od[i]);
    }
}