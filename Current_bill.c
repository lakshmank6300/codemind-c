#include<stdio.h>
int main()
{
    float a,b,c,s;
    scanf("%f",&a);
    if(a<199)
    s=a*1.20;
    else if(a>=200 && a<400)
    s=a*1.50;
    else if(a>=400 && a< 600)
    s=a*1.80;
    else 
    s=a*2;
    if(s<400)
    {
        printf("%.2f",s+100);
    }
    else if(s>400)
    {
        s=s*15/100+s;
        printf("%.2f",s);
    }
}