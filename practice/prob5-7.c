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

    t = 0;

    for(m = 0; m < 5; m++){
        t += data[m];
    }
    printf("\n\n合計値：%d\n",t);
    printf("平均値：%lf\n\n",t/5.0);

    printf("平均値より大きい数：");
    for(m = 0; m < 5; m++){
        if(data[m] > t/5.0){
            printf("%d ",data[m]);
        }
    }

    printf("\n平均値より小さい数：");
    for(m = 0; m < 5; m++){
        if(data[m] < t/5.0){
            printf("%d ",data[m]);
        }
    }
}