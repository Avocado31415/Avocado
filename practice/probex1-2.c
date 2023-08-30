#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main(){
  int a[5], i,b = 0;
  // 乱数の初期化
  srand((unsigned) time(NULL));
  //    １から１０までの乱数を発生させる
  for(i = 0; i < 5; i++){
    a[i] = rand() % 10 + 1;
    printf("%d ",a[i]);
  }
  printf("\n最大値：");
  for(i = 0; i < 5; i++){
    if(b < a[i]){
        b = a[i];
    }
  }
  printf("%d\n最小値：",b);
  for(i = 0; i < 5; i++){
    if(b > a[i]){
        b = a[i];
    }
  }
  printf("%d\n",b);
}