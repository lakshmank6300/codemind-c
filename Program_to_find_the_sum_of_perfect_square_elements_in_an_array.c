#include<stdio.h>
int main()
{
    int a[100],b,c,i,j,s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=1;j<=a[i];j++)
       {
           if(j*j==a[i])
           {
               s=s+a[i];
           }
       }
   }
   printf("%d",s);
}