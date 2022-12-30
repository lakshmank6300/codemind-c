#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c>=a && c<b)
        {
            printf("YES
");
        }
        else
        printf("NO
");
    }
}