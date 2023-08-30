#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[10];
    int m,n;
    srand((unsigned)time(NULL));
    //  成分の表示
    for(m = 0; m < 10; m++){
        data[m] = rand() % 10 + 1;
    }
    for(m = 0; m < 10; m++){
        printf("%d ",data[m]);
    }

    printf("\n\n");
    printf("3の倍数：");
    for(m = 0; m < 10; m++){
        if(data[m] % 3 == 0){
            printf("%d ",data[m]);
        }
    }

    printf("\n3の倍数以外の数：");
    for(m = 0; m < 10; m++){
        if(data[m] % 3 != 0){
            printf("%d ",data[m]);
        }
    }
    printf("\n");
}