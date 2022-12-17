#include<stdio.h>
int main()
{
    float n,k,x,y,r,s;
    scanf("%f%f%f%f",&n,&k,&x,&y);
    r=n-k;
    s=k*x;
    if(x>=y)
    s=s+r*y;
    else
    {
    s=s+r*x;
    }
    printf("%.0f",s);
    
}