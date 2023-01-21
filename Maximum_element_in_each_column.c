#include<stdio.h>
int main()
{
	int a[100][100],i,j,n,m,max=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		max=0;
		for(j=0;j<n;j++)
		{
			if(a[j][i]>max)
			  max=a[j][i];   
		}
		
		printf("%d
",max);
	}
	
	
}