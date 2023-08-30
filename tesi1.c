#include <stdio.h>

int main(void){
    int x[10], y[10];
    int i,j;

    for(i=0;i<10;i++){
        printf("Type\n");
        scanf("%d%d",x,y);
        printf("OK\n");
        if(i!=0){
            for(j=0;j<i;j++){
                if(x[i]!=x[j] && y[i]!=y[j]){
                    break;
                }else{
                    printf("That number is already used.\n");
                    i--;
                }
            }
        }


    }
    printf("Finish!\n");
}