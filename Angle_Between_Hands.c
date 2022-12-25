#include<stdio.h>
#include<math.h>
int main()
{
    float h,m,c,b;
    scanf("%f:%f",&h,&m);
    c=abs((h*30)-(5.5*m));
    b=360-c;
    if(c<b)
    printf("%.1f",c);
    else 
    printf("%.1f",b);
}