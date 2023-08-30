#include <stdio.h>
 
void main(){
    char *s[3] = { "Taro","Hanako","Tom" };
    char **pps = NULL;  //  ポインタのポインタ
    int i;
    for(i = 0; i < 3; i++){
        printf("%s\n",s[i]);
    }
    pps = s;
    for(i = 0; i < 3; i++){
        printf("%s\n",*pps);
        pps++;  //  アドレスを一つずらす
    }   
}