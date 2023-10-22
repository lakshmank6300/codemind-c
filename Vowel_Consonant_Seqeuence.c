#include<stdio.h>
#include<string.h>
int isvowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return 1;
    }
    return 0;
}
int main(){
    char s[10000];
    int v;
    scanf("%s",s);
    if(isvowel(s[0])){
    printf("V");
    v=1;
    }
    else{
    printf("C");
    v=0;
    }
    for(int i=1;i<strlen(s);i++){
        if(v==0 && isvowel(s[i])){
            printf("V");
            v=1;
        }
        else if(v==1 && isvowel(s[i])==0){
            printf("C");
            v=0;
        }
    }
}