#include<stdio.h>
int main()
{
    int a,i,m=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    m=n[0];
    for(i=0;i<a;i++)
    {
        if(m<n[i])
        {
            m=n[i];
        }
    }
    printf("%d",m);
}