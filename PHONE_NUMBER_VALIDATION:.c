 #include<stdio.h>
int main()
{
    long int a,b,c,i,j;
    scanf("%ld",&a);
    for(b=a;b>0;b=b/10)
    {
        c=b%10;
        i++;
    }
    //printf("%ld",i);
    j=a/1000000000;
    if(i==10)
    {
       if(j!=0)
       {
        printf("Valid");
       }
       else
       {
          printf("Invalid"); 
       }
    }
    else
    printf("Invalid");
    return 0;
}