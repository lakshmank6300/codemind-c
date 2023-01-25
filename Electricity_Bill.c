#include<stdio.h>
int main()
{
    int a;
    float c,b,sc,t;
    scanf("%d",&a);
    if(a<=199)
    {
        c=1.20;
        b=a*c;
    }
    else if(a>=200 && a<400)
    {
        c=1.40;
        b=a*c;
    }
    else if(a>=400 && a<600)
    {
        c=1.60;
        b=c*a;
    }
    else if(a>=600 && a<800)
    {
        c=1.80;
        b=c*a;
    }
    else 
    {
        c=2.00;
        b=c*a;
    }
    if(b>400)
    {
        sc=0.15*b;
    }
    else 
    {
        sc=0;
    }
    t=sc+b;
    printf("Units Consumed: %d
",a);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",t);
    
}