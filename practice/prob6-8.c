#include <stdio.h>

int get_absolute(int);

void main(){
    int n;
    printf("数値を入力してください:");
    scanf("%d",&n);
    printf("%d\n",get_absolute(n));
}

int get_absolute(int n){
    if(n < 0){
        return -n;
    }else{
        return n;
    }
}

