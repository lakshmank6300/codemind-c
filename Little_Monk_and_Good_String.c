#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000];
    scanf("%s",ch);
    int c=0,max=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        c++;
        else
        c=0;
        if(c>max){
            max=c;
        }
    }
    printf("%d",max);
}