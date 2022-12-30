#include<stdio.h>
int main()
{
    float b,j,k,c=0,temp,max=0,min;
    int i,n;
       scanf("%d",&n);
         float a[n];
        
       for(i=0;i<n;i++)
      {
         scanf("%f",&a[i]);
         if(a[i]>max)
         {
         max=a[i];
          min=a[0];
         }
         if(a[i]<min)
         {
         min=a[i];
         }
       }
        //printf("%d %d",max,min);
        k=0;
        for(i=0;i<n;i++)
        {
          k=k+a[i];
        }
         printf("%.5f",(k-(max+min))/(n-2));
       }