#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n;
    srand((unsigned)time(NULL));
    while(n % 10 != 0){
        n = rand() % 100 + 1;
        printf("%d\n",n);
    }
    printf("終了します\n");
}