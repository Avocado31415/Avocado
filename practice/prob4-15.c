#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int main(void){
    int n;

for(n=1;n <= 100; n++){
    printf("%d ",n);
    if(n % 10 == 0){
        printf("\n");
        }
    }
    return 0;
}