#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 3 + 1;
    if(n == 1){
        printf("グー\n");
    }else if(n == 2){
        printf("チョキ\n");
    }else if(n == 3){
        printf("パー\n");
    }
}