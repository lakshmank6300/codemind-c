#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,num,max=0,t;
    char s[100],str[100],s3[100];
    scanf("%s",s);
    scanf("%s",str);
    n=strlen(s);
    num=strlen(str);
    for(i=0;i<n;i++)
    {
        s3[i]=s[i];
    }
    for(i=n;i<n+num;i++)
    {
        s3[i]=str[i-n];
    }
   // printf("%s",s3);
    for(i=0;i<n+num;i++)
    {
    	for(j=i+1;j<n+num;j++)
    	{
    		 
       	if(s3[j]<s3[i])
       	{
         t=s3[i];
         s3[i]=s3[j];
         s3[j]=t;
        }
        }
    }
    printf("%s",s3);
}