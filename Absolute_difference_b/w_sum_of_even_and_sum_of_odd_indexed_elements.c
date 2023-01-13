#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,c=0,d=0;
    scanf("%d",&a);
    int n[a];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            c=c+n[i];
        }
    }
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            d=d+n[i];
        }
    }
    int e=abs(c-d);
    printf("%d",e);
}