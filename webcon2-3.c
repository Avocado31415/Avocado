#include <stdio.h>
#include <stdlib.h>

void intg1(int n, int a[], int v[]);//aからvを計算する
void intg2(int n, int a[], int x[]);//aからxを計算する

void intg1(int n, int a[], int v[])
{
    int i;
    for(i=0; i<n+1; i++){
        v[i+1] = a[i] + v[i];
    }
}

void intg2 (int n, int a[], int x[])
{
    int *vdum;
    vdum = (int*)malloc(sizeof(vdum)*n);
    *vdum = 1;//初期値 vと同じ
    intg1(n, a, vdum);
    x[0]=0;//多分違う
    intg1(n, vdum, x);//もう一回intg1を呼び出してxを求める
    free(vdum);
}


int main(void)
{
    int i=0 ,*ap;
    int x[10], v[9], a[8];

    for(i=0; i<8; i++){
        a[i]=6*(i+1);
    }

    v[0] = 1;//初期値
    intg1 (8,a,v);
    printf("v[%d]=%d",0,v[0]);

    for(i=1;i<9;i++){
        printf(",v[%d]=%d", i, v[i]);
    }

    printf("\n");

    x[0] = 0;//初期値
    intg1(9,v,x);
    printf("x[%d]=%d",0,x[0]);

    for(i=1; i<10; i++){
        printf(",x[%d]=%d", i, x[i]);
    }

    printf("\n");
    intg2(8,a,x);
    printf("x[%d]=%d",0,x[0]);

    for(i=1; i<10; i++){
        printf(",x[%d]=%d", i, x[i]);
    }

    printf("\n");
    ap = a-1;
    printf("ap[%d]=%d", 1, ap[1]);

    for(i=2; i<9; i++){
        printf(",ap[%d]=%d", i, ap[i]);
    }

    printf ("\n");
}