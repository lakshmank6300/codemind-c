#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b,c,d,e,f,max=0,i;
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    for(c=0;c<n;c++)
    {
        if(a[c]>max)
        {
            max=a[c];
        }
    }
          for(max;max>0;max++)
          {
              i=0;
              for(d=0;d<n;d++)
              {
                  if(max%a[d]==0)
                  {
                      i++;
                  }
              }
              if(i==n)
              {
                  printf("%d",max);
                  break;
              }
          }
}  