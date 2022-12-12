#include<stdio.h>
int main()
{
    int s=0,n,x,p;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
        p=1;
        break;
        }
    }
    if(p==1)
    printf("True");
    else
    printf("False");

}