#include <stdio.h>
#include <string.h>

int main(void){
    char a[256], b[256], c[256];
    printf("文字列１：");
    scanf("%s",a);
    printf("文字列２：");
    scanf("%s",b);
    strcat(c,a);
    strcat(c,b);
    printf("結合した結果：\n%s",c);
}