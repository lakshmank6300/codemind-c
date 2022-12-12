#include<stdio.h>
int main()
{
    float s=0,n;
    scanf("%f",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%.2f",s/n);
}