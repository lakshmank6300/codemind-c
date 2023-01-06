#include<stdio.h>
int main()
{
    int a[100][100],c,i,j,m,n,k=0,l=0,s,max=0,ans;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    for(i=0;i<m;i++)
    {
        s=0;
        k=0;
        for(j=0;j<n;j++)
        {
             s=s+a[i][j];
        }
        printf("%d ",s);
    }  
}    