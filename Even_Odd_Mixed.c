#include<stdio.h>
int main()
{
    int a,i=0,k=0,j=0,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        i++;
        if(b%2==0)
        j++;
        else
        k++;
        a=a/10;
    }
    if(i==j)
    printf("Even");
    else if(i==k)
    printf("Odd");
    else
    printf("Mixed");
}