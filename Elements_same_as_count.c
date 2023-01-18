#include<stdio.h>
int main()
{
    int i,n,j,k,l,a[100],c=1,p=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               for(l=j;l<n;l++)
               {
                   a[l]=a[l+1];
               }
               j--;
               n--;
               c++;
            }
        }    
    if(c==a[i])
    {
    printf("%d ",a[i]);
     p++;
    }
        c=1;
    }
   if(p==0)
   {
       printf("-1");
   }
}