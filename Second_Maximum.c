#include<stdio.h>
int main()
{
    int a,b,c;
    int n;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && b<c)
    {
        printf("%d
",b);
    }
    else if(b>c && b<a)
     printf("%d
",b);
    else if(a>c && a<b)
    printf("%d
",a);
    else 
    printf("%d
",c);
}
}