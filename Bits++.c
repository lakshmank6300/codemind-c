#include<stdio.h>
#include<string.h>
int main(){
    int t,i=0;
    scanf("%d",&t);
    while(t--){
    	char ch[1000];
    scanf("%s",ch);
    if(ch[0]=='X' && ch[1]=='+'){
        i++;
         //printf("%dfdx",i);
    }
    else if(ch[0]=='+' && ch[1]=='+'){
       ++i; 
    }
    else if(ch[0]=='X' && ch[1]=='-'){
        i--;
         //printf("%dfchvgc",i);
    }
    else
    --i;
    }
    printf("%d",i);
}