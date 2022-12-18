#include<stdio.h>
int main()
{
    int a,b,c=0,s=0,l=0,k=0,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
           s++;
    }
    if(s==2)
    {
        while(a!=0)
        {
            c=0;
            b=a%10;
            l++;
            for(i=1;i<=b;i++)
            {
                if(b%i==0)
                c++;
            }
            if(c==2)
            {
                k++;
            }
            a=a/10;
        }
        if(l==k)
        {
            printf("Mega Prime");
        }
        else 
        printf("Not Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}