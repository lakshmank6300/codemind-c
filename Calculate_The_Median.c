#include<stdio.h>
int main()
{
	int a[5],b,i,j,n,k,c=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
        b=n/2-1;
	    k=n/2;
	if(n%2==0)
	{
	    c=(a[b]+a[k])/2;
	    printf("%d",c+6);
	}
	else
	{
	c=a[k];
	printf("%d",c);
	}
	
}