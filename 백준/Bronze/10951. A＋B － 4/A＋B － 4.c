#include <stdio.h>
int main(void){
    int a=0,b=0;
    int list;
    while(a!=EOF&&b!=EOF){
        list=scanf("%d %d",&a,&b);
        if(list==EOF) break;
        printf("%d\n",a+b);
    }
    return 0;
}