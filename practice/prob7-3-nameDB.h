#ifndef _NAMEDB_H_
#define _NAMEDB_H_

//  生徒の名前（10名まで登録可能）
char names[10][256];
 
//  データの初期化
void init();
//  生徒の名前の設定
void setName(int,char*);
//  生徒の名前の表示
void showName(int);

#endif // _NAMEDB_H_