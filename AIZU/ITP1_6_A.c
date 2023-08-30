#include<stdio.h>

#define N 10000
int main(void){
    int x;
    int a[N];
    int i;
    int count=0;
    
    scanf("%d", &x);

    for(i=0; i<x; i++){
        scanf("%d", &a[i]);
        count++;
    }

    for(i=x-1; i!=-1; i--){
        printf("%d ",a[i]);
    }
    printf("\n");
}