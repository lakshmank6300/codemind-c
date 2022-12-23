#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,b,min=999999,c,d;
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    for(c=0;c<n;c++)
    {
        if(a[c]<min)
        {
        min=a[c];
        }
    }
    for(min;min>0;min--)
    {
        i=0;
        for(d=0;d<n;d++)
        {
            if((a[d]%min)==0)
            {
                i++;
            }
        }
        if(i==n)
        {
        printf("%d",min);
        break;
        }
    }
}