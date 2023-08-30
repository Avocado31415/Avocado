#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prob7-5-logic.h"

//  コンピュータの手
int player = 0;
//  プレイヤーの手
int computer = 0;

extern char results[3][16];
//  初期化
void init()
{
    srand((unsigned) time(NULL));
}
//  指定した範囲の乱数を発生
void setPlayer(int num)
{
    player = num;
}
//  指定した範囲の乱数を発生
void setComputer()
{
    computer = rand() % 3;
}