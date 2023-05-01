#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    if(m<=1 && n<=1){
        printf("Player 2");
    }
    else{
        if(m%2==0 || n%2==0)
        printf("Player 1");
        else
        printf("Player 2");
    }
}