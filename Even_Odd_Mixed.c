#include<stdio.h>
int main()
{
    int a,b,c=0,i=0,j=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c++;
        if(b%2==0)
        i++;
        else if(b%2==1)
        j++;
        a=a/10;
    }
     if(c==i)
       printf("Even");
        else if(c==j)
        printf("Odd");
        else
        printf("Mixed");
    
}