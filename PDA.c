#include<stdio.h>
int main()
{
    int a,c=0,j;
    scanf("%d",&a);
        for(j=1;j<a;j++)
        {
            if(a%j==0)
            {
                c=c+j;
            }
        }
            if(c==a)
            {
             printf("PERFECT");
            }
            else if(c<a)
             printf("DEFICIENT");
             else
             printf("ABUNDANT");
}