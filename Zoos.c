#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int z=0,o=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='z')
        z++;
        else
        o++;
    }
    if(2*z==o)
    printf("Yes");
    else 
    printf("No");
}