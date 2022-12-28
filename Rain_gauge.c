#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d",&a);
    if(a<3)
    printf("LIGHT
");
    else if(a>=3 && a<7)
    printf("MODERATE
");
    else if(a>=7)
    printf("HEAVY
");
    }
}