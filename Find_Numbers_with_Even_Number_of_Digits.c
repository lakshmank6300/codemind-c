#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,k=0,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       scanf("%d",&b);
       c=log10(b)+1;
       if(c%2==0)
       {
           k++;
       }
    }
    printf("%d",k);
    
}