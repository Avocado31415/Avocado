#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char word[100];
    int i;
    
    printf("Input words:");
    scanf("%s",word);

    /* アルファベットの小文字を大文字に変換 */
    for(i=0;i<=strlen(word);i++){
    /* アルファベットの小文字なら変換 */
        if(word[i]>=97&&word[i]<=122){
            word[i]=word[i]-32;
        }
    }
    printf("%s\n",word);
    return 0;
}