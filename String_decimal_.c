#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char st[1000];
        scanf("%s",st);
        int flag=1,i;
        for(i=0;i<strlen(st);i++){
            int k=st[i];
            if(k<48 || k>57){
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("True");
        else
        printf("False");
        printf("
");
    }
}