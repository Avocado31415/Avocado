#include <stdio.h>
#include <malloc.h>
  
void main(){
    //  数値配列代入用のポインタ変数
    double *a = NULL;
    int i;
    //  メモリの生成
    a = (double*)malloc(sizeof(double)*6);
    for(i = 0; i < 6; i++){
        a[i] = 0.1 * i;
    }
    //  結果の表示
    for(i = 0; i < 6; i++){
        printf("%f ",a[i]);
    }
    printf("\n");
    //  メモリの開放
    free(a);
}