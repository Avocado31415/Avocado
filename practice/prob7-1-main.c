#include <stdio.h>
#include "prob7-1-calculation.h"
  
//  整数の割り算を行う関数
int div(int,int);
//  整数の割り算の余りを計算する関数
int mod(int,int);
 
void main(){
    int n1,n2;
    int r1,r2;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    r1 = div(n1,n2);    //  入力した2つの整数値の商を求める
    r2 = mod(n1,n2);    //  入力した2つの整数値の割り算の余りを求める
    printf("%d / %d = %d 余り %d\n",n1,n2,r1,r2);
}