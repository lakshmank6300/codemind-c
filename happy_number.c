#include<stdio.h>
int main()
{
    int s=0,a,b,c;
    scanf("%d",&a);
    loop:
    while(a!=0)
    {
        b=a%10;
        s=s+b*b;
        a=a/10;
        if(a==0 && s>0 && s<10)
        {
            if(s==7 || s==1)
            printf("True");
            else
            printf("False");
        }
        else if(a==0 && s>=10)
        {
            a=s;
            s=0;
        }
    }
}