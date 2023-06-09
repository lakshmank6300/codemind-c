#include<stdio.h>
int main(){
    int n;
    int c=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            c+=i;
        }
    }
    if(c>n)
    printf("True");
    else
    printf("False");
}