#include<stdio.h>
int main()
{
     long long int a,b,c,k,l,i,j,n;
    scanf("%lld",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            k=0;
            k=j*j+i*i;
            if(k==n)
            {
               l=1;
               break;
            }
        }
        if(l==1)
        break;
    }
    if(l==1)
    printf("True
");
    else
    printf("False
");
    
}