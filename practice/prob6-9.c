#include <stdio.h>

void square(int,int);

void main(){
    int k ,l;
    printf("たて:");
    scanf("%d",&k);
    printf("よこ:");
    scanf("%d",&l);
    square(k,l);
}

void square(int k, int l){
    int i,j;
    for(i = 0; i < k; i++){
        for(j = 0; j < l; j++){
            printf("■");
        }
        printf("\n");
    }
}

