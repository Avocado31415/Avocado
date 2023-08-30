#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main(){
  int a[5], i,b;
  // 乱数の初期化
  srand((unsigned) time(NULL));
  //    １から１００までの乱数を発生させる
  for(i = 0; i < 5; i++){
    a[i] = rand() % 100 + 1;
    printf("a[%d]=%d ",i,a[i]);
  }
  printf("\n20以上50以下の数：");
  b = 0;
  for(i = 0; i < 5; i++){
    if(20 < a[i] && a[i] <= 50){
        b++;
    }
  }
  printf("%d\n80より大きい数：",b);
  b = 0;
  for(i = 0; i < 5; i++){
    if(80 < a[i]){
        b++;
    }
  }
  printf("%d\n0以上10未満の数：",b);
  b = 0;
  for(i = 0; i < 5; i++){
    if(0 < a[i] && a[i] < 10){
        b++;
    }
  }
  printf("%d\n",b);
}