#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("数値：%d\n",n);
    if(20 <= n && n < 80){
    printf("20以上80未満です。\n");
    }else{
    printf("20未満か、80以上です。\n");
    }
}