#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=0,a,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            continue;
        }
        s+=arr[i];
    }
    printf("%d",s);
}