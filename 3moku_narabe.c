#include <stdio.h>
#include <windows.h>
#include <string.h>

int stop=0;
char first[10],second[10];

void print1(char c[]);
void show(char ox[]);
int check1(char ox[], int x, int y);
int check2(char ox[]);
void change(char ox[], int x, int y, int i);

int main(void){
    char b[1];
    int i=0;
    int x,y,ch2=0,j;
    char ox[]={"?????????"}, temp[strlen(ox)];

    while(b[0]!='Y'){//名前を入手
        print1("Type your name.\n");
        if(i==0){
            scanf("%s",first);
        }else if(i==1){
            scanf("%s",second);
        }
        print1("Is your name ");
        if(i==0){
            print1(first);
        }else if(i==1){
            print1(second);
        }
        print1("?\n");
        print1("If your name is collect, please type Y.\n");
        print1("If your name is not collect, please type N.\n");
        scanf("%s",b);
        if(b[0]=='Y'){
            print1("OK.\n");
            i++;
        }else{
            print1("OH NO\n");
        }
        if(i==1 && b[0]=='Y'){
            print1("Go to the next player.\n");
            b[0]='N';
        }
    }


    print1("First of all, a game description is given.\nThe player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner.\n");
    print1("The game field looks like this.\n");
    for(i=0;i<3;i++){
        print1("□ □ □");
        printf("\n");
    }

    i=0;

    print1("If you want to put the circle or cross on here,\n");
    print1("□ ■ □");
    printf("\n");
    print1("□ □ □");
    printf("\n");
    print1("□ □ □");
    printf("\n");
    print1("Please type like this \"2 1\"\n");
    print1("LET'S START THE GAME.\n");

    while(ch2 == 0){
        print1("Type where you want to put the");
        if(i%2 == 0 || i == 0){
            print1(" circle, ");
            print1(first);
        }else if(i%2 != 0){
            print1(" cross, ");
            print1(second);
        }
        printf("\n");

        scanf("%d %d", &x, &y);
        if(0 < x && x < 4 && 0 < y && y < 4){
            if(check1(ox,x-1,y-1)==1){//入力がすでにあるかどうか
                change(ox,x-1,y-1,i);
                ch2 = check2(ox);
                if(ch2 == 1){
                    print1(first);
                    print1(" is winner.\n");
                }else if(ch2 == 2){
                    print1(second);
                    print1(" is winner.\n");
                }
            }else{
                print1("That number is invalid.\n");
                print1("Please enter another number.\n");
                i--;
            }
        }
        i++;
        if(9==i){
            print1("there is no place to put the circle or cross.\n");
            print1("End this game.");
            ch2 = 0;
        }
    }
}

void print1(char c[]){
    int i=0;
    while(c[i]!='\0'){
        printf("%c",c[i]);
        i++;
        Sleep(stop);
        if(c[i]=='\n'){
            Sleep(stop*500);
        }
    }
}

void show(char ox[]){
    int i;
    for(i = 0; i < strlen(ox); i++){
        printf("%c",ox[i]);
        if((i+1) % 3 == 0){
            printf("\n");
        }
    }
}

int check1(char ox[], int x, int y){//すでに入っているかどうか確かめる
    if(ox[x+3*y]=='?'){//入ってないなら1、はいってるなら0
        return 1;
    }
    return 0;
}

int check2(char ox[]){//そろっているか確認 1を返すとoが、2を返すとxが勝ち
    if(ox[1]=='o'){
        if(ox[0]=='o' && ox[2]=='o'){//横にそろってる場合
            return 1;
        }else if(ox[4]=='o' && ox[7]=='o'){//縦にそろってる場合
            return 1;
        }
    }

    if(ox[3]=='o'){
        if(ox[4]=='o' && ox[5]=='o'){//横にそろってる場合
            return 1;
        }else if(ox[0]=='o' && ox[6]=='o'){//縦にそろってる場合
            return 1;
        }
    }

    if(ox[5]=='o'){
        if(ox[2]=='o' && ox[8]=='o'){//縦にそろってる場合
            return 1;
        }
    }

    if(ox[7]=='o'){
        if(ox[6]=='o' && ox[8]=='o'){//横にそろってる場合
            return 1;
        }
    }

    if(ox[4]=='o'){
        if((ox[0]=='o' && ox[8]=='o') || (ox[2]=='o' && ox[6]=='o')){
            return 1;
        }
    }
    //ここまでがoがそろっているかどうか


    if(ox[1]=='x'){
        if(ox[0]=='x' && ox[2]=='x'){//横にそろってる場合
            return 2;
        }else if(ox[4]=='x' && ox[7]=='x'){//縦にそろってる場合
            return 2;
        }
    }

    if(ox[3]=='x'){
        if(ox[4]=='x' && ox[5]=='x'){//横にそろってる場合
            return 2;
        }else if(ox[0]=='x' && ox[6]=='x'){//縦にそろってる場合
            return 2;
        }
    }

    if(ox[5]=='x'){
        if(ox[2]=='x' && ox[8]=='x'){//縦にそろってる場合
            return 2;
        }
    }

    if(ox[7]=='x'){
        if(ox[6]=='x' && ox[8]=='x'){//横にそろってる場合
            return 2;
        }
    }

    if(ox[4]=='x'){
        if((ox[0]=='x' && ox[8]=='x') || (ox[2]=='x' && ox[6]=='x')){
            return 1;
        }
    }
    //ここまでがxがそろっているかどうか

    return 0;

}

void change(char ox[], int x, int y, int i){//ox入れかえ
    int ch1;
    ch1 = check1(ox,x,y);
    if(ch1 == 1){
        if(i % 2 == 0 || i == 0){//偶数
            ox[x+3*y]='o';
        }else{//奇数
            ox[x+3*y]='x';
        }
        show(ox);
    }
    if(ch1 == 0){
        print1("That position has already been taken.\n");
    }
}
