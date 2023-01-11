#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    scanf("%d",&a);
    for(i=1;i<=a/5;i++)
    {
        b=i*i;
        if(b==a)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}