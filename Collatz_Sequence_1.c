#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    printf("%d ",a);
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            printf("%d ",a);
        }
        else
        {
        a=3*a+1;
        printf("%d ",a);
        }
    }
}