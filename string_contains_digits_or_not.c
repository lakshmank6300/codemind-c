#include<stdio.h>
#include<string.h>
int main()
{
    
    int t,n,j,i,c;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
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
    printf("No
");
    else
    printf("Yes
");
    }
}