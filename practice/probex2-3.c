#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a, i;
    
    srand((unsigned) time(NULL));

    for(i = 0; i < 4; i++){
        a = rand() % 20 + 1 - 10;
        printf("%dつ目の数値:%d 絶対値%d\n",i+i, a, absolute(a));
    }
}

int absolute(int a){
    if(a < 0){
        return -a;
    }else{
        return a;
    }
}