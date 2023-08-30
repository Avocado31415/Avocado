#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;

    printf("西暦を入力してください：",n);
    scanf("%d",&n);
    
    if(n % 400 == 0){
        printf("閏年です。\n");
    }else if(n % 100 == 0){
        printf("閏年ではありません。\n");
    }else if(n % 4 == 0){
        printf("閏年です。\n");
    }
}