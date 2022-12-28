#include<stdio.h>
int main()
{
    int a=0,b=1,c,near,min,i,max,n;
    scanf("%d",&n);
     for(i=1;i>0;i++)
     {
         //printf("%d ",a);
         c=a+b;
         a=b;
         b=c;
         if(c<n)
         {
            min=b; 
         }
         else
         {
         max=b;
         break;
         }
     }
     if(n-min==max-n)
     {
         printf("%d %d",min,max);
     }
     else
     {
     near=(n-min<max-n)?min:max;
     printf("%d",near);
     }
}