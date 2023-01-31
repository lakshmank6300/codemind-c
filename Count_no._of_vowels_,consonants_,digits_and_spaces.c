#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,v=0,k=0,c=0,sp=0,n;
    scanf("%[^
]",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'|| s[i]=='u' ||s[i]=='A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v++;
        else if(s[i]>=48 && s[i]<=57)
        k++;
        else if(s[i]==' ')
        sp++;
        else 
        c++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,k,sp);
}