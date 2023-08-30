#include <stdio.h>
#include <string.h>
int main(void){
    char a[256];
    int i = 0;
    
    printf("文字列を入力：");
    scanf("%s",a);
    i = strlen(a);

    printf("文字列の長さ：%d", i);
}