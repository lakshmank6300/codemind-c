#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=10;i++)
    {
        if(a+b+i==21)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("%d",i);
    }
    else
    printf("-1");
}