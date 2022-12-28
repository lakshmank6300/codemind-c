#include<stdio.h>
int main()
{
    int arr[100],a,b,c,s=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            break;
        }
        else
        s=s+arr[i];
    }
    printf("%d",s);
}