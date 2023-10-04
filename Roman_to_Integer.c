#include<stdio.h>
#include<string.h>
int val(char s){
    if(s=='I')
        return 1;
    else if(s=='V')
        return 5;
    else if(s=='X')
        return 10;
    else if(s=='L')
        return 50;
    else if(s=='C')
        return 100;
    else if(s=='D')
        return 500;
    else if(s=='M')
        return 1000;
    else
        return -1;
}
int romanToDecimal(char *str){
    long long int s=0,i;
        for(i=strlen(str)-1;i>0;i--){
            if(val(str[i])>val(str[i-1])){
                s+=val(str[i])-val(str[i-1]);
                i--;
            }
            else{
                s+=val(str[i]);
            }
        }
        if(i!=-1){
        s+=val(str[0]);
        }
        return s;
    }
int main()
{
    char str[39999];
    scanf("%s",str);
    int ans=romanToDecimal(str);
    printf("%d",ans);
    
}