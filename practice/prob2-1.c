#include <stdio.h>
 
void main(){
    int a, b;                              //  変数a,b（キーボードからの値を代入)

    printf("a=");                       //  キーボードからの入力を促す
    scanf("%d",&a);                     //  キーボードから一文字入力

    printf("b=");                       //  キーボードからの入力を促す
    scanf("%d",&b);                     //  キーボードから一文字入力
    
    printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d\na %% b = %d\n",a+b,a-b,a*b,a/b,a%b);        //  aの値を表示
}