#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,n,c=0,k=0;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        k++;
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        s++;
        else if(a[i]%2==1)
        c++;
    }
    if(s==k)
    {
        printf("True");
    }
    else
    printf("False");
}