#include<stdio.h>
#include<math.h>
void merge(int l,int m,int r,int* arr){
    int res[r-l+1];
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j])
            res[k++]=arr[i++];
        else
            res[k++]=arr[j++];
    }
    while(i<=m){
        res[k++]=arr[i++];
    }
    while(j<=r){
    res[k++]=arr[j++];
    }
    k=0;
    for(i=l;i<=r;i++)
    arr[i]=res[k++];
}
void merge_sort(int l,int r,int* arr){
    if(l<r){
        int m=(l+r)>>1;
        merge_sort(l,m,arr);
        merge_sort(m+1,r,arr);
        merge(l,m,r,arr);
    }
}
int main(){
    int n,socks[100];
    scanf("%d",&n);
    int i;
    int c=0;
    for(i=0;i<n;i++){
        scanf("%d",&socks[i]);
    }
    merge_sort(0,n-1,socks);
    for(i=0;i<n;i++){
        if(socks[i]==socks[i+1]){
            i++;
            c++;
        }
    }
    printf("%d",c);
}