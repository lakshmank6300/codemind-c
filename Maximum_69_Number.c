#include<stdio.h>
int main()
{
    int a,b,arr[100],i,j;
    scanf("%d",&a);
    i=0;
    while(a!=0)
    {
        b=a%10;
        arr[i]=b;
        i++;
        a=a/10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
            arr[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}