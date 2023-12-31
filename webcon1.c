#include <stdio.h>

double matAvrDiagElements(int a[3][3]);
void matProduct(int a[3][3], int b[3][3], int c[3][3]);
void mat4thPower(int a[3][3], int d[3][3]);

int main(int arc, char *argv[]){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    double av;
    int c[3][3], d[3][3];
    int i,j;

    av = matAvrDiagElements(a);
    printf("average of diagonal elements = %f \n",av);
    matProduct(a,b,c);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    mat4thPower(a,d);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}

double matAvrDiagElements(int a[3][3]){
    int i,j;
    double b=0.0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                b+=a[i][j];
            }
        }
    }
    return b/3.0;
}

void matProduct(int a[3][3], int b[3][3], int c[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
        }
    }
}

void mat4thPower(int a[3][3], int d[3][3]){
    int b[3][3];
    matProduct(a,a,b);
    matProduct(b,b,d);
}