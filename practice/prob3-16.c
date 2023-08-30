#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("%d\n",n);

    if(n % 6 == 0){
        printf("2と3の公倍数です。\n");
    }else if(n % 2 == 0){
        printf("2の倍数です。\n");
    }else if(n % 3 == 0){
        printf("3の倍数です。\n");
    }
}