#include<stdio.h>
#include<string.h>
int main()
{
    int n,j,i,c=0;
    char s[100];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>=47 && s[i]<=58)
        {
            c++;
        }
    }
    if(c==0)
    printf("Doesn't contain digit");
    else
    printf("Contains %d digit",c);
}