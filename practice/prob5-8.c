#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[5];
    int m,n,t;
    srand((unsigned)time(NULL));
    //  成分の表示
    for(m = 0; m < 5; m++){
        data[m] = rand() % 20 + 1 - 10;
    }
    for(m = 0; m < 5; m++){
        printf("%d ",data[m]);
    }

    printf("\n");

    t = 0;

    printf("0よりも大きい数：");
    for(m = 0; m < 5; m++){
        if(data[m] > 0){
            t++;
        }
    }
    printf("%d個\n",t);

    t = 0;

    printf("0より小さい数：");
    for(m = 0; m < 5; m++){
        if(data[m] < 0){
            t++;
        }
    }
    printf("%d個\n",t);
    
    t = 0;

    printf("0の個数：");
    for(m = 0; m < 5; m++){
        if(data[m] == 0){
            t++;
        }
    }
    printf("%d個\n",t);
}