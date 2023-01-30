#include<stdio.h>
int main()
{
    int i,j,a[100],s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        {
            s=1;
            
            break;
        }
    }
    if(s==1)
    printf("False");
    else
    printf("True");
}