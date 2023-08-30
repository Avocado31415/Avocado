#include<stdio.h>
#include<math.h>

#define PI 3.141592
#define eV 1.602177
#define m 9.109390
#define h 6.626076
#define H  h/(2*PI)
#define a 4


double f(double E, double V0){
    double alpha, beta;
    alpha = sqrt((2 * m * E) / (H * H));
    beta = sqrt((2 * m * (V0 - E)) / (H * H));
    return alpha / tan(alpha * a / 10) + beta;
}

int main(void){
    double y0, y1, x0, x1, xm, ym, eps;
    double V0;
    eps = 1.0e-10;

    for(V0=eV; V0 < 21*eV; V0 = V0 + 1*eV){
        x0 = 1.9*eV;
        x1 = 2.0*eV;

        y0 = f(x0,V0);
        y1 = f(x1,V0);
        for(int j = 0; j < 10000; j++){
            xm = (y1 * x0 - y0 * x1) / (y1 - y0);
            ym = f(xm,V0);
            if(fabs(ym) < eps) break;
            if(y0 * ym < 0){
                y1 = ym;
                x1 = xm;
            }else{
                y0 = ym;
                x0 = xm;
            }
        }
        printf("\nV0 = %g; root = %g", V0 / eV, xm / eV);
    }
}