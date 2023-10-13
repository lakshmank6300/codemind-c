#include<stdio.h>
int main(){
    int n,mx=0;;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mx)
        mx=arr[i];
        arr1[i-1]=mx;
    }
    arr1[n-1]=-1;
    for(int i=0;i<n;i++)
    printf("%d ",arr1[i]);
}