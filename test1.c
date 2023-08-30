#include <stdio.h>
#include <windows.h>
#include <string.h>

void print1(char c[]);
int stop=10;

int main(void){
    char c[1000]={"1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890"};
    print1(c);
}


void print1(char c[]){
    int i=0;
    while(c[i]!='\0'){
        printf("%c",c[i]);
        i++;
        Sleep(stop*200);
        if(c[i]=='\n'){
            Sleep(stop*2000);
        }
    }
}