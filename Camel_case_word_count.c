#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",&ch);
    int i=0,c=0;
    if(ch[0]>='A' && ch[0]<='Z'){
        c=0;
    }
    else{
        c=1;
    }
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>='A' && ch[i] <= 'Z'){
            c++;
        }
    }
    if(c==0)
    printf("1");
    else
    printf("%d",c);
}
