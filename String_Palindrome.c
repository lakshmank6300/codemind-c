#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int b;
    scanf("%s",ch);
    b=strlen(ch);
    int i,flag=0,n;
    for(i=0;i<b;i++)
    {
        if(ch[i]!=ch[b-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not Palindrome");
    }
    else
    printf("Palindrome");
}