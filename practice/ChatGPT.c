#include<stdio.h>

int main(void){
    int H[1000],W[1000];
    int i=1,j=0,k=0;
    
    scanf("%d %d", &H[0], &W[0]);
    
    while(H[i-1]!=0 && W[i-1]!=0){
        scanf("%d %d", &H[i], &W[i]);
        i++;
    }
    
    i=0;
    
    while(H[i]!=0 && W[i]!=0){
        for(j=0; j<H[i]; j++){
            for(k=0; k<W[i]; k++){
                printf("#");
            }
            printf("/n");
        }
        printf("/n");
        i++;
    }
    return 0;
}