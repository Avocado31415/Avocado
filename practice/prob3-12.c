#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 20 + 1 - 10;
    printf("数値：%d\n",n);
    if(n < 0){
    printf("負の値です。\n");
    }else if(n > 0){
    printf("正の値です。\n");
    }else{
        printf("0です、\n");
    }
}