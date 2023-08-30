#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[5];
    int m,n,t;
    srand((unsigned)time(NULL));
    //  成分の表示
    for(m = 0; m < 5; m++){
        data[m] = rand() % 10 + 1;
    }
    for(m = 0; m < 5; m++){
        printf("%d ",data[m]);
    }

    printf("\n\n");

    for(m = 0; m < 5; m++){
        while(data[m] > 0){
            printf("*");
            data[m]--;
        }
        printf("\n");
    }   
}