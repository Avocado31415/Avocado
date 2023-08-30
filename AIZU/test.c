#include<stdio.h>

int main(void){
    char a,a1;
    int b,b1;
    scanf("%c %d",&a,&b);
    fflush(stdin);
    scanf("%s %d",&a1,&b1);
    fflush(stdin);
    printf("%c %d\n",a,b);
    printf("%c %d\n",a1,b1);
}