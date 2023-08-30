#include <stdio.h>

double circumference(double);
double area(double);

void main(){
    double n;
    printf("円の半径を入力してください:");
    scanf("%lf",&n);
    printf("半径%fの円周の長さは%f、面積は%fです。\n",n,circumference(n),area(n));
}

double circumference(double n){
    return 2 * 3.14 * n;    
}


double area(double n){
    return 3.14 * n * n;
}

