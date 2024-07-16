#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        s[i]=s[i]-32;
        printf("%c",s[i]);
    }
}