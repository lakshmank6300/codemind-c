#include<stdio.h>
int main()
{
    int a,c=0,j;
    scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            
            if(a%j==0)
            {
                c++;
            }
        }
            if(c==2)
            {
                printf("Prime");
            }
            else
             printf("Not Prime");
}