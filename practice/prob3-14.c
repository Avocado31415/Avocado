#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int a,b;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    if(a > b){
        printf("aのほうが大きいです。\n");
    }else if(a < b){
        printf("bのほうが大きいです。\n");
    }else{
        printf("等しいです。\n");
    }
}