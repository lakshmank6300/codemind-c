#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,s=0,k1=0,k2=0;
	scanf("%d",&a);
//	printf("0 ");
	for(i=1;i<=a+1;i++)
	{
	    	if(i%2==1)
		{
		    
		    printf("%d ",s);
		    s=s+2;
		}
	    if(i%2==0)
		{
		    
		    printf("%d ",k2);
		   k2++;
		}
	
	}
}