#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
//  コンピュータの手
extern int player;
//  プレイヤーの手
extern int computer;
extern char results[3][16];
//  乱数の初期化
void init();
//  プレイヤーの手値設定
void setPlayer(int);
//  コンピュータの手設定
void setComputer();
//  判定
void Judge();
 
void main(){
    int num;
    init();
    printf("じゃんけんゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    while(1){
        printf("あなたの手は？(0-2):");
        scanf("%d",&num);
        if(num < 0 || num > 2){
            printf("終了します\n");
            break;
        }else{
            setPlayer(num); //  自分の手設定
            setComputer();  //  コンピュータの手設定
            Judge();        //  判定
        }
    }
}