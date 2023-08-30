#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void main(){
    double d[] = {1.2,-1.3,5.2,4.8};
    int m,n;
    //  成分の表示
    for(m = 0; m < 4; m++){
        printf("d[%d]=%.1lf ",m,d[m]);
    }   
}