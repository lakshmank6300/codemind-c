#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
       if(a[i]=='1')
       {
           c++;
       }
    }
    printf("%d",c);
}