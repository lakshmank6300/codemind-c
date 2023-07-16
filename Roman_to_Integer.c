#include<stdio.h>
#include<string.h>
char stack[1000];
int top=-1;
int val(char c){
    if(c=='I')
    return 1;
    else if(c=='V')
    return 5;
    else if(c=='X')
    return 10;
    else if(c=='L')
    return 50;
    else if (c=='C')
    return 100;
    else if(c=='D')
    return 500;
    else if(c=='M')
    return 1000;
    else
    return 999999;
}
void push(int val){
    top++;
    stack[top]=val;
}
int pop(){
    int val=stack[top];
    top--;
    return val;
}
int Top(){
    if(top==-1)
    return 'f';
    return stack[top];
}
int main(){
    char str[1000];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }
    int s=0,i;
    char p;
    for(i=top;i>=0;i--){
        char k=pop();
        if(val(Top())<val(k)){
            s+=(val(k)-val(Top()));
            p=pop();
            i--;
        }
        else
        s+=val(k);
    }
     printf("%d",s);
}
