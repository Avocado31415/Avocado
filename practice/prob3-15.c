#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("点数：%d\n",n);
    if(80 <= n){
        printf("優\n");
    }else if(70 <= n && n < 80){
        printf("良\n");
    }else if(60 <= n && n < 70){
        printf("可\n");
    }else{
        printf("不可\n");
    }
}