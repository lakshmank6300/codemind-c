#include<stdio.h>
int main()
{
    int a,b,s,k,i,j,n;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k=i;
        s=0;
        for(j=i;j>0;j=j/10)
        {
            n=j%10;
            s=s*10+n;
        }
        if(k==s)
        {
            printf("%d ",k);
        }
    }
}