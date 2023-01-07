#include<stdio.h>
int main()
{
    int a[100],b,s=0,c=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            s=a[i]+s;
        }
        else
        c=c+a[i];
    }
   // printf("%d %d",s,c);
    if((s-c)%4==0)
    {
        printf("X");
    }
    else
    printf("Y");
}