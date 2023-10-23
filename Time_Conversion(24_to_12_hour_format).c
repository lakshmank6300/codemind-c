#include<stdio.h>
#include<string.h>
int main(){
    char st[1000];
    scanf("%[^
]s",st);
    int h=(st[0]-'0')*10+st[1]-'0';
    int m=(st[3]-'0')*10+st[4]-'0';
    if(h==0){
        printf("12:%.2d AM",m);
    }
    else if(h>=12){
        if(h==12)
        printf("12:%.2d PM",m);
        else
        printf("%.2d:%.2d PM",h-12,m);
    }
    else if(h<12){
        printf("%.2d:%.2d AM",h,m);
    }
}