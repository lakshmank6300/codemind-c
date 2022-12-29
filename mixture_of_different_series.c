#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p=0,s,k1=0,i,m=2;
    scanf("%d",&a);
    printf("0 0 ");
    for(i=1;i<a;i++)
    {
        if(i%2==1)
        {
            s=pow(2,k1);
            p=p+s;
            printf("%d ",p);
            k1++;
        }
        if(i%2==0)
        {
        	printf("%d ",m);
        	m=3*m+2;
		}
    }
}