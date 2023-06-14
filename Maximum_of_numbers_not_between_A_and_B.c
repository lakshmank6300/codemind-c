#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int s=0,a,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            continue;
        }
         if(arr[i]>max)
         max=arr[i];
         c=1;
    }
    if(c==1)
    printf("%d",max);
   else
   printf("-1");
}