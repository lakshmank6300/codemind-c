#include<stdio.h>
int main()
{
    int a,b,c,i,d,l,r;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d%d%d",&d,&l,&r);
        if(d>=l && d<=r)
        {
            printf("Take second dose now
");
        }
        else if(d>r)
        {
            printf("Too Late
");
        }
        else
        {
            printf("Too Early
");
        }
    }
}