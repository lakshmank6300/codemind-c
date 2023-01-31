#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,t;
   char s[500];
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
       if(s[i]>=65 && s[i]<=90)
       {
          // printf("%s",s);
           s[i]=s[i]+32;
       }
   }
   printf("%s",s);
}