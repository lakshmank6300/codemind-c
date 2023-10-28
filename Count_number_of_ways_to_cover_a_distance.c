#include<stdio.h>
int count_num_ways(int n){
    if(n==0) return 1;
    else if(n==1) return 1;
    else if(n==2) return 2;
    else
        return count_num_ways(n-1)+count_num_ways(n-2)+count_num_ways(n-3);
}
int main(){
    int n;
    scanf("%d",&n);
    int ans=count_num_ways(n);
    printf("%d",ans);
}