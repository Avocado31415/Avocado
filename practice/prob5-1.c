#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int a[6];
    int m,n;
    srand((unsigned)time(NULL));

    //  二次元配列に値を代入
    for(m = 0; m < 6; m++){
        n = rand() % 10 + 1;
        a[m] = n;
    }
    //  成分の表示
    for(m = 0; m < 6; m++){
        printf("a[%d]=%d ",m,a[m]);
    }   
}