#include <stdio.h>
#include <string.h>
 
//  生徒の名前（10名まで登録可能）
char names[10][256];
 
//  データの初期化
void init();
//  生徒の名前の設定
void setName(int,char*);
//  生徒の名前の表示
void showName(int);


void main(){
    init();
    setName(0,"山田太郎");
    setName(1,"太田花子");
    setName(2,"徳川家康");
    showName(1);
    showName(2);
    showName(0);
}
 
