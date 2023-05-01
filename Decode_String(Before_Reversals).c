#include<stdio.h>
#define Empty (-1)
char stack[100];
int top=Empty;
void push(int val){
	top++;
    stack[top]=val;
}
int pop(){
    int val=stack[top];
    top--;
    return val;
}
int is_empty(){
	if(top==-1)
	return 1;
	else 
	return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int i,steps,n,f,j;
    char ch[100];
    scanf("%d%d",&n,&steps);
    scanf("%s",&ch);
    int s=0;
    for(i=steps-1;i>0;i--){
        f=0;
        while(f<=i){
            push(ch[f]);
            f++;
        }
        j=0;
        while(top!=-1){
            ch[j]=pop();
            j++;
        }
        s++;
        if(s==steps)
        break;
    }
    printf("%s
",ch);
    }
}