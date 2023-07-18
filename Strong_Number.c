#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n,s=0,k,i;
    scanf("%d",&n);
    k=n;
    while(n!=0){
        int r=n%10;
        int f=1;
        for(i=1;i<=r;i++)
        f*=i;
        s+=f;
        n=n/10;
    }
    if(s==k){
        printf("Strong
");
    }
    else
    printf("Not Strong
");
    }
}