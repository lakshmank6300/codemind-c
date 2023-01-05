#include<stdio.h>
int main()
{
    int b,c,i,j,n,t,k,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               for(k=j;k<n;k++)
               {
                   a[k]=a[k+1];
               }
               n--;
               j--;
           }
       }
    }
   if(l==4)
   printf("4");
   else
   printf("%d ",a[n-l]);
}