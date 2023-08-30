#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[10];
    int m,n,t;
    srand((unsigned)time(NULL));
    //  成分の表示
    for(m = 0; m < 10; m++){
        data[m] = rand() % 10 + 1;
    }
    for(m = 0; m < 10; m++){
        printf("%d ",data[m]);
    }

    t = 0;

    printf("\n\n");
    printf("最大値：");
    for(m = 0; m < 10; m++){
        if(data[m] > t){
            t = data[m];
        }
    }
    printf("%d",t);

    printf("\n最小値：");
    for(m = 0; m < 10; m++){
        if(data[m] < t){
            t = data[m];
        }
    }
    printf("%d\n",t);
}