#include<stdio.h>
int main()
{
    int i,j,l,n;
    float k,a[100],c=1,p=0,m=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
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
       // printf("%d",c);
    if(c==a[i])
    {
      s=s+a[i];
     p++;
    }
        c=1;
    }
    if(p==0)
    {
        printf("-1");
    }
    else
    {
    k=s/p;
   printf("%.2f",k);
    }
}