#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c=0,k=0,i,j;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
    a=2;
    }
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            k++;
        }
    }
    printf("%d",k);
}