#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,s=0,d1=0,i=0,f,l,k,ans,n,m;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
        i++;
    }
    l=s%10;
   // printf("%d",l);
    f=s/pow(10,i-1);
    d=f*pow(10,i-1)+l;
    //printf("%d",d);
    k=d;
    //printf("%d",k);
    while(k!=0)
    {
        b=k%10;
        d1=d1*10+b;
        k=k/10;
    }
   // printf("%d",d1);
    m=n-d1;
    ans=d+m;
    printf("%d",ans);
}