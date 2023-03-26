#include<stdio.h>
void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=0,b[r-l+1];
    while(i<=m && j<=r){
        if(a[i]<=a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=m) 
    b[k++]=a[i++];
    while(j<=r)
    b[k++]=a[j++];
    k=0;
    for(i=l;i<=r;i++)
    a[i]=b[k++];
}
void merge_sort(int a[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)>>1;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int i,j,n,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
     for(i=0;i<n;i){
         if(a[i]==a[i+1]){
         i+=2;
         k++;
         }
         else
         i++;
     }
     printf("%d",k);
}