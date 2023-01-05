#include<stdio.h>
int main()
{
    int a,k=0,i,j=0,m=0,l=0;
    scanf("%d",&a);
   // printf("%d",a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            k++;
            //printf("%d ",i);
            l=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    l++;
                }
            }
            if(l==2)
              {
                  m++;
                 // printf("%d ",j);
              }
        }
    }
   
  printf("%d",k-m);
}