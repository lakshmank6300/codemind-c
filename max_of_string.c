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
        if(s[i]>c)
        {
            c=s[i];
        }
    }
    printf("%c",c);
}