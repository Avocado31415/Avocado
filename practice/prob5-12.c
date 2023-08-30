#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[3][3];
    int m,n;
    srand((unsigned)time(NULL));
    //  二次元配列に値を代入
    for(m = 0; m < 3; m++){
        for(n = 0; n < 3; n++){
            data[m][n] = rand() % 9 + 1;
        }
    }
    //  成分の表示
    for(m = 0; m < 3; m++){
        for(n = 0; n < 3; n++){
            printf("%d ",data[m][n]);
        }
        printf("\n");
    }   
}