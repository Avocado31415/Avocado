# include <stdio.h>
# include <stdlib.h>

void intg1(int n, int a[], int v[]);//aからvを計算する
void intg2(int n, int a[], int x[]);//aからxを計算する

void intg1(int n, int a[], int v[])
{
    int i;
    for(i=0;i<n;i++){
        v[i+1]=a[i]*i;
    }
}

void intg2 (int n, int a[], int x[])
{
    int *vdum;
    vdum=(int*)malloc(sizeof(vdom)*n);
    *vdum=1;
    intg1(n,a,vdum);
    ;
    ;
    free(vdum);
}


int main(void){
    int i=0 ,*ap;
    int x[10], v[9], a[8];
    for(i=0; i<8; i++){
        a[i]=6*(i+1);
    }
    「 空 欄1 0 」;
    intg1 (8,a,v);
    printf("v[%d]=%d",0,v[0]);
    for( 「 空 欄1 1 」) {
        printf(",v[%d]=%d" ,i ,v[i]);
    }
    printf("\n");
    「 空 欄1 2 」;
    intg1(9,v,x);
    printf("x[%d]=%d",0,x[0]);
    for(「 空 欄1 3 」) {
        printf(",x[%d]=%d",i,x[i]);
    }

    printf("\n");
    intg2(8,a,x);
    printf("x[%d]=%d",0,x[0]);
    for(i=1; i<10; i++){
        printf(",x[%d]=%d", i, x[i]);
    }
    printf("\n");
    「 空 欄1 4 」;
    printf("ap[%d]=%d",1,ap[1]);
    for(i=2; i<9; i++){
        printf(",ap[%d]=%d", i, ap[i]);
    }
    printf ("\n");
}