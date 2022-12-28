#include<stdio.h>
int main()
{
    int arr[100],i,j,k=0,n,s,b,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=arr[i];
        s=0;
        while(arr[i]!=0)
        {
            b=arr[i]%10;
            s=s*10+b;
            arr[i]=arr[i]/10;
        }
        if(s==p)
        {
            k++;
        }
    }
    if(k==n)
    {
        printf("1");
    }
    else
    printf("0");
    
}