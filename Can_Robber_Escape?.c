#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=1,i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=n){
            c=0;
        }
    }
    if(c==0){
        printf("NO");
    }
    else 
    printf("YES");
    
}