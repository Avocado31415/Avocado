#include <stdio.h>

int gcf(int,int);
int lcm(int,int);

void main(){
    int k ,l;
    printf("1つ目の値を入力してください:");
    scanf("%d",&k);
    printf("2つ目の値を入力してください:");
    scanf("%d",&l);
    printf("2つの数の最小公倍数は、%dです。\n",lcm(k,l));
    printf("2つの数の最大公約数は、%dです。\n",gcf(k,l));
    
}

int gcf(int a, int b){
    int c, temp;
    if(a < b){
        c = a;
        a = b;
        b = c;
    }

    while(1){
        c = a % b;
        if(c == 0){
            return b;
        }else{
            temp = a;
            a = b;
            b = c;
            c = temp;
        }
    }

}

int lcm(int a, int b){
    return (a/gcf(a,b)) * gcf(a,b) * (b/gcf(a,b));    
}

