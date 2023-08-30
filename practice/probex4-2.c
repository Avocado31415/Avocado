#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int* a){
    int i;
    printf("発生した乱数；\n");
    for(i = 0; i < 5; i++){
        printf("%d ", *a);
        a++;
    }
    printf("\n");
}

void two(int* a){
    int i;
    for(i = 0; i < 5; i++){
        *a = *a * 2;
        a++;
    }
}

void twoshow(int* a){
    int i;
    printf("二倍した乱数：\n");
    for(i = 0; i < 5; i++){
        printf("%d ", *a);
        a++;
    }
    printf("\n");
}
void main(){
    int a[5],i;

    srand((unsigned) time(NULL));

    for (i = 0; i < 5; i++){
        a[i] = rand() % 100 + 1;
    }
    
    show(a);
    two(a);
    twoshow(a);
}