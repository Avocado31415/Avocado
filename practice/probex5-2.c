#include <stdio.h>
#include <string.h>

int main(void){
    char a[256], b[256], c[256];
    int i, j = 0;

    for(i = 0; i < 256; i++){
        a[i] = 0;
    }
    for(i = 0; i < 256; i++){
        b[i] = 0;
    }
    for(i = 0; i < 256; i++){
        c[i] = 0;
    }

    printf("文字列１：");
    scanf("%s",a);
    printf("文字列２：");
    scanf("%s",b);
    
    for(i = 0; i < 256; i++){
        c[i] = a[i];
    }
    
    for(i = 0; i < 256; i++){
        if(c[i] == 0){
            c[i] = b[j];
            j++;
        }
    }
    printf("結合した結果：\n%s",c);
}