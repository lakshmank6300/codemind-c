#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int ans=0,k=1,n=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
            ans+=s[i]-'0';
        }
    }
    printf("%d",ans);
}