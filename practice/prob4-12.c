#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int a, n[5], i;
    srand((unsigned)time(NULL));
    for(i = 0; i < 5; i++){
        n[i] = rand() % 100 + 1;
        printf("%d\n",n[i]);
    }
    a = n[0];
    for(i = 0; i < 5; i++){
        if(n[i] < a){
            a = n[i];
        }
    }
    printf("最小値：%d", a);
}