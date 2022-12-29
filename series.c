#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,s,k1=0,k2=0;
	scanf("%d",&a);
	printf("0 ");
	for(i=1;i<a;i++)
	{
	    	if(i%2==1)
		{
		    s=pow(3,k1);
		    printf("%d ",s);
		    k1++;
		}
	    if(i%2==0)
		{
		    s=pow(2,k2);
		    printf("%d ",s);
		    k2++;
		}
	
	}
}