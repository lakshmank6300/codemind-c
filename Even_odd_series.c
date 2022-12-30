#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p=0,s,k1=1,i,k2=0;
    scanf("%d",&a);
    //printf("0 0 ");
    for(i=1;i<=a+1;i++)
    {
        if(i%2==1)
        {
            s=pow(2,k1);
            printf("%d ",s);
            k1++;
        }
        if(i%2==0)
        {
        	printf("%d ",b);
        	b=pow(3,k2);
        	k2++;
		}
    }
}