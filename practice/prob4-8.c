#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n;
    while(n != 10){
        srand((unsigned)time(NULL));
        n = rand() % 10 + 1;
        printf("%d\n",n);
    }
    printf("終了します\n");
}