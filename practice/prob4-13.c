#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    if(n < 5){
        printf("発生した数値：%d\n",n);
    }else{
        for(i = n;0 < i; i--){
            printf("★");
        }

    }
    return 0;
}