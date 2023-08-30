#include "prob7-4-calculation.h"

int ans=0;

//  初期値の設定
void init(int num)
{
    ans = num;  //  値の初期化
}
//  加算
void add(int num)
{
    ans += num; //  現在の値に足し算
}
//  減算
void sub(int num)
{
    ans -= num; //  現在の値から引き算
}