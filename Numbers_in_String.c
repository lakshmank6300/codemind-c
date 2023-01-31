#include<stdio.h>
#include<string.h>
int main()
{
    int n,j,i,c=0;
    char s[100];
    scanf("%[^
]",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            c=c+s[i]-48;
        }
    }
    printf("%d",c);
}