#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("%d\n",n);


    if(n <= 50 && n % 2 == 0){
        printf("50以下の偶数です。\n");
    }else if(n <= 50){
        printf("50以下です。\n");
    }else if(n % 2 == 0){
        printf("偶数です。\n");
    }
}