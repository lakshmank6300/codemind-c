#include<stdio.h>
int main()
{
	int a,b,s=0,c=0,k=0,r;
	scanf("%d",&a);
	s=0;
	b=a*a;
     while(a!=0)
     {
     	r=a%10;
     	s=s*10+r;
     	a=a/10;
	 }
	 c=s*s;
	 while(c!=0)
	 {
	 	r=c%10;
	 	k=k*10+r;
	 	c=c/10;
	 }
	 if(b==k)
	 {
	 	printf("True");
	 }
	 else
	 printf("False");
}