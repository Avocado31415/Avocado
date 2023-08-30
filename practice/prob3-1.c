#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    if(a >= 5){
        printf("5以上です。\n");
    }
}