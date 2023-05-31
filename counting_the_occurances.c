#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0,n;
    char str[1000],ch;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    //printf("%c",ch);
    n=strlen(str);
    
    for(i=0;i<n;i++)
    {
        if(str[i]==ch || str[i]==ch+32)
         {
             //printf("%c",str[i]);
             c++;
         }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}