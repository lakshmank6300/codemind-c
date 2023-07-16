#include<stdio.h>
int power(int n,int i){
    int p=1;
    while(i--){
        p=n*p;
    }
    return p;
}
int main(){
    int n,r,s=0,i=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        s+=r*power(8,i);
        i++;
        n=n/10;
    }
    printf("%d",s);
}