#include<stdio.h>
int main()
{
    int a[100],b,c,n,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
      if(a[i]>=s/n)
      {
          c++;
      }
    }
    printf("%d",c);
}