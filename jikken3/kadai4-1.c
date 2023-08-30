#include<stdio.h>
#include<math.h>

double f(double x){
    return x*x-2;
}

double df(double x){
    return 2*x;
}

int main(void){
    double x0, x1, eps;

    x0 = 100;
    x1 = 5;

    while(fabs(x1 - x0) > eps){
        x0 = x1;
        x1 = x0 - f(x0) / df(x0);
    }
    printf("\nroot = %g", x0);
}