#include "prob7-4-calculation.h"
#include "prob7-4-showResult.h"

void showNum();
//  初期値の設定
void init(int);
//  加算
void add(int);
//  減算
void sub(int);

extern int ans;
 
void main(){
    init(100);
    showNum();
    add(10);    //  10加算
    showNum();
    sub(100);   //  100減算
    showNum();
}