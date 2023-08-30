#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i;
    short int n;

    printf("Input Number(0-255):");
    scanf("%d",&n);

    for(i = 0; i < 8; i++){
        if((n & 0x80)  == 0){
            printf("0");
        }else{
            printf("1");
        }
        n = n << 1;
    }
    printf("\n");
    return 0;
}