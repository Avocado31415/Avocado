#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    int data[5];
    int m,n,t;
    srand((unsigned)time(NULL));
    //  成分の表示
    for(m = 0; m < 5; m++){
        data[m] = rand() % 100 + 1;
    }
    for(m = 0; m < 5; m++){
        printf("%d ",data[m]);
    }

    printf("\n\n");

    printf("0以上60未満：");
    for(m = 0; m < 5; m++){
        if(0 <= data[m] && data[m] < 60){
            printf("%d ",data[m]);
        }
    }  
    printf("\n");
    printf("60以上80未満：");
    for(m = 0; m < 5; m++){
        if(60 <= data[m] && data[m] < 80){
            printf("%d ",data[m]);
        }
    }  
    printf("\n");
    printf("80以上：");
    for(m = 0; m < 5; m++){
        if(80 <= data[m]){
            printf("%d ",data[m]);
        }
    }  
    printf("\n");

}