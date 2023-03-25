#include<stdio.h>
int main(){
    int i,j,n,c=0,k,t;
    scanf("%d",&t);
    while(t--){
    	c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        	if(i!=j){
            for(k=0;k<n;k++){
            if(a[i]+a[j]==a[k])
            c++;
            }
        }
        }
    }
    if(c!=0){
        printf("%d
",c);
    }
    else
    printf("-1
");
}
}