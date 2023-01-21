#include<stdio.h>
int main()
{
    int n,i,arr[100],j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i>0;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                s=1;
                break;
            }
        }
        if(s!=1)
        {
            printf("%d",i);
            break;
        }
    }
}