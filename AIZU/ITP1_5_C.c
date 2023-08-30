#include<stdio.h>

#define N 10000

int main(void){
    int H[N], W[N];//縦H横W
    int i, j, k;
    int h, w;
    
    for(i=0; i<N; i++){
        H[i]=0;
        W[i]=0;
    }
    
    for(i=0; i<N; i++){
        scanf("%d %d",&H[i],&W[i]);
        if(H[i]==0 && W[i]==0){
            j=i;
            break;
        }
    }
    
    for(i=0; i<j; i++){
        h=H[i];
        w=W[i];
        
        for(k=0; k<H[i]; k++){
            for(int l=0; l<W[i]; l++){
                if(((k+l-2) % 2)==0){
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}