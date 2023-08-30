#include <stdio.h>
  
//  関数のプロトタイプ宣言
int add(int,int);
int sub(int,int);
 
int main(void){
    int a,b;
    printf("a=");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);     //  2つ目の数、bを入力
    printf("%d + %d = %d\n",a,b,add(a,b));    //  計算結果を出力
    printf("%d - %d = %d\n",a,b,sub(a,b));
    return 0;
}
 
//  二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n1, int n2){
    return n1 - n2;
}