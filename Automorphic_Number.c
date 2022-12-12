#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,i=0,n;
    scanf("%d",&a);
    n=a;
    s=n*n;
    while(a!=0)
    {
        b=a%10;
        i++;
        a=a/10;
    }
    c=pow((10),i);
    if(s%c==n)
    {
        printf("Automorphic Number");
    }
    else
     printf("Not an Automorphic Number");
}