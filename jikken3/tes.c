#include<stdio.h>
#include<math.h>

#define PI 3.141592
#define eV 1.602177
#define m 9.109390
#define h 6.626076
#define H  h/(2*PI)
#define V0 20*eV


double f(double E, double a){
    double alpha, beta;
    alpha = sqrt((2 * m * E) / (H * H));
    beta = sqrt((2 * m * (V0 - E)) / (H * H));
    return alpha * tan(alpha * a / 10) - beta;
}

int main(void){
    double y0,y1,x0,x1, xm, ym, eps;
    double a;
    eps = 1.0e-10;

    for(a=3.0; a <= 5.0; a = a + 0.1){
        x0 = 0.4*eV;
        x1 = 0.5*eV;

        y0 = f(x0,a);
        y1 = f(x1,a);
        for(;;){
            xm = (y1 * x0 - y0 * x1) / (y1 - y0);
            ym = f(xm,a);
            if(fabs(ym) < eps) break;
            if(y0 * ym < 0){
                y1 = ym;
                x1 = xm;
            }else{
                y0 = ym;
                x0 = xm;
            }
        }
        printf("\na = %g; root = %g",a, xm / eV);
    }
}