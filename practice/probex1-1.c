#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main(){
  int a, i;
  // 乱数の初期化
  srand((unsigned) time(NULL));
  //    １から１０までの乱数を発生させる
  for(i = 0; i < 5; i++){
    a = rand() % 10 + 1;
    printf("%d ",a);
  }
  printf("\n");
}