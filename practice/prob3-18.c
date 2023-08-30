#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 45 + 1 - 10;
    printf("摂氏%d度\n",n);


    if(n >= 30){
        printf("真夏日です。\n");
    }else if(25 <= n && n < 30){
        printf("夏日です。\n");
    }else if(n < 0){
        printf("真冬日です。”\n");
    }
}