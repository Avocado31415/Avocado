#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n, i=0;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n",n);
    do{
        printf("■");
        i++;
    }while(i<n);
    return 0;
}
    