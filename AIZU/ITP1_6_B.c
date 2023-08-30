#include<stdio.h>

int main(void){
    int have[4][13];//SHCD
    int x;//持ってるトランプの枚数
    char c;//のアルファベット
    int c2;
    int a;//の数字
    int i, j;
    
    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            have[i][j]=0;//初期化
        }
    }
    
    scanf("%d",&x);
    
    for(i=0; i<x; i++){
        scanf("%c %d",&c,&a);
        printf("%c %d",c,a);
        if(c=='S'){
            c2=0;
        }
        if(c=='H'){
            c2=1;
        }
        if(c=='C'){
            c2=2;
        }
        if(c=='D'){
            c2=3;
        }
        have[c2][a-1]=1;
    }

    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            if(have[i][j]==0){
                if(i==0){
                    c='S';
                }
                if(i==1){
                    c='H';
                }
                if(i==2){
                    c='C';
                }
                if(i==3){
                    c='D';
                }
                printf("%c %d\n",c,j+1);
            }
        }
    }
    return 0;
}