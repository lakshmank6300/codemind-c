#include<stdio.h>
int main()
{
    int a[3],c=1,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
         c=a[i]*c;
    }
    printf("%dKB",c);
    
}