#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,s,k1=0,k2=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	    if(i%2==0)
		{
		    s=pow(2,k1);
		    printf("%d ",s);
		    k1++;
		}
		if(i%2==1)
		{
		    s=pow(3,k2);
		    printf("%d ",s);
		    k2++;
		}
	}
}