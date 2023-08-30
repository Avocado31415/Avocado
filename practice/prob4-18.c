#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n, i;

for(n=1; n <= 9; n++){
    for(i=1; i <= 9; i++){
        if(n == i){
            printf("□");
        }else{
            printf("■");
        }
        }
    printf("\n");
    }
return 0;
}