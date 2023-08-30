#include <stdio.h>

void numJudge(int);
  
void main(){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numJudge(a);
}

void numJudge(int a){
    if(a == 0){
        printf("0です\n");
    }else if(a%2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }
}