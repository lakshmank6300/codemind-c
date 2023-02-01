#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c=0,t;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
    char s[100];
    scanf("%s",s);
    n=strlen(s);
    //printf("%s",s);
    //printf("%d",s[n-1]);
    for(i=0;i<n;i++)
    {
        
        if(s[i]!=s[n-i-1])
        {
        c=1;
        }
    }
    if(c==0 && n%2==0)
    printf("YES EVEN
");
    else if(c==0 && n%2==1)
    printf("YES ODD
");
    else
    printf("NO
");
    }
}