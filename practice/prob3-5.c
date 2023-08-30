#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    if(20 <= a && a < 80){
        printf("20以上80未満です。\n");
    }
}