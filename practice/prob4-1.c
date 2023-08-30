#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n",n);
    for(i = n;0 < i;i--){
        printf("■");
    }
    return 0;
}