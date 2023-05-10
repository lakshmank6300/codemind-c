#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int c=1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=n){
            printf("NO");
            c=0;
            break;
        }
    }
    if(c==1)
    printf("YES");
}