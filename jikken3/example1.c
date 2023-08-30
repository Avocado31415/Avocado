#include<stdio.h>
#include<math.h>

double f(double x){
    return x*x-2;
}

int main(void){
    double y0,y1,x0,x1, xm, ym, eps;
    eps = 1.0e-10;

    x0 = 1.0;
    x1 = 2.0;

    y0 = f(x0);
    y1 = f(x1);

    for(;;){
        xm = (y1 * x0 - y0 * x1) / (y1 - y0);
        ym = f(xm);
        if(fabs(ym) < eps) break;
        if(y0 * ym < 0){
            y1 = ym;
            x1 = xm;
        }else{
            y0 = ym;
            x0 = xm;
        }
    }
    printf("\n root = %g", xm);
}