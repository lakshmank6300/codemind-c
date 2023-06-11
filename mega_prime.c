#include<stdio.h>
int prime(int n){
    int i;
    if(n==1)
    return 0;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    int c=0,l=0;
    scanf("%d",&n);
    int k=n;
    if(prime(n)){
        while(k!=0){
            int r=k%10;
            k/=10;
            c++;
            if(prime(r)){
                l++;
            }
        }
        if(c==l)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    else{
    printf("Not Mega Prime");
    }
}