#include<stdio.h>
int main()
{
    int a[100],b[100],c,n,o=0,l=0,i;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            l++;
        }
        else if(a[i]<b[i])
        {
            o++;
        }
    }
    printf("%d %d",l,o);
}