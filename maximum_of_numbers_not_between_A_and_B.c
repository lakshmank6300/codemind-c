#include<stdio.h>
int main()
{
    int a,b,i,n,c=0,max;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    max=arr[a];
     for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]>max)
            {
                c++;
            max=arr[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    printf("%d",max);
}