#include<stdio.h>
int main()
{
    int a,b,c,arr[100],k=0,l=0,i,j;
    scanf("%d",&a);
   // printf("%d",a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        arr[k]=b;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(arr[i]==arr[j])
            {
                l++;
            }
        }
    }
   
    if(l==k)
    {
        printf("Unique Number");
    }
    else
        printf("Not Unique Number");
}