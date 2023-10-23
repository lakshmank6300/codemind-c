#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int c=0,mx=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        c+=1;
        else
        c=0;
        if(c>mx)
        mx=c;
    }
    printf("%d",mx);
}