#include<stdio.h>
int main()
{
    int a,b,c,x,i,j,k=0,n,v;
    scanf("%d%d",&a,&b);
     x=a+b;
     n=x;
     for(x=n+1;x>0;x++)
     {
         k=0;
         for(i=1;i<=x;i++)
         {
             if(x%i==0)
             k++;
         }
        if(k==2)
        {
            v=x;
             printf("%d",v-n);
            break;
        }
       
     }
}