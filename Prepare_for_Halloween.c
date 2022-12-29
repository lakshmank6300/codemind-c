#include<stdio.h>
int main()
{ 
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b); 
        if(a*2>b*5) 
        printf("Chocolate
");
        else if(a*2<b*5) 
        printf("Candy
");
        else if(a*2==b*5)
        printf("Either
"); 
        
    }
    }