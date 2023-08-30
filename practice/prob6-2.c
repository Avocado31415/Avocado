#include <stdio.h>
  
//  関数のプロトタイプ宣言
int mul(int,int,int);
 
void main(){
    int a,b,c;
    int result;
    printf("a=");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);     //  2つ目の数、bを入力
    printf("c=");
    scanf("%d",&c);     //  3つ目の数、cを入力
    printf("%d * %d * %d = %d\n",a,b,c,mul(a,b,c));    //  計算結果を出力
}
 
//  二つの整数の和を求める関数
int mul(int n1,int n2, int n3){
    return n1 * n2 * n3;
}