#include <stdio.h>

double triangle(double,double);
  
void main(){
    double teihen,takasa;   //  底辺と高さを入れる変数
    double menseki;     //  三角形の面積
    printf("底辺=");
    scanf("%lf",&teihen);       //  1つ目の数、aを入力
    printf("高さ=");
    scanf("%lf",&takasa);       //  2つ目の数、bを入力
    printf("三角形の面積%f", triangle(teihen,takasa));
}

double triangle(double n1,double n2){
    return n1 * n2 / 2;
}