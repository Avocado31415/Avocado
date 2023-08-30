#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    if(90 <= a || a <= 10){
        printf("10以下か90以上の値です。\n");
    }
}