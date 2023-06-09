#include<stdio.h>
int main(){
    int n,c=0,m=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            c+=1;
            if(c>m)
            m=c;
        }
        else{
            c=0;
        }
    }
    printf("%d",m);
}