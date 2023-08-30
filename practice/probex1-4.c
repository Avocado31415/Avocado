#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main(){
    int a,b,i;
    
    srand((unsigned) time(NULL));
    for(i = 0; i < 6; i++){
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        printf("%d + %d = %d\n",a,b,a+b);
    }
}