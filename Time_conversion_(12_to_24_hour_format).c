#include<stdio.h>
#include<string.h>
int main(){
    char st[1000];
    scanf("%[^
]s",st);
    int h=(st[0]-'0')*10+st[1]-'0';
    int m=(st[3]-'0')*10+st[4]-'0';
    if(st[6]=='A'){
        if(h==12)
        printf("00:%.2d",m);
        else
        printf("%.2d:%.2d",h,m);
    }
    else
        if(h==12)
        printf("12:%.2d",m);
        else
        printf("%.2d:%.2d",h+12,m);
}