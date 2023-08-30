#include <stdio.h.>
#include <math.h>

double distance(double a[2], double b[2]);


int main(void){
    double a[2], b[2];
    int i;

    for(i = 0; i < 2; i++){
        printf("%dつ目のベクトルのX:",i+1);
        scanf("%lf",&a[i]);
        printf("%dつ目のベクトルのY:",i+1);
        scanf("%lf",&b[i]);
    }
    
    printf("(%f,%f)と(%f,%f)の距離は%fです。\n",
    a[0],b[0],a[1],b[1],distance(a,b));
}

double distance(double a[2], double b[2]){
    return sqrt((a[0] - a[1])*(a[0] - a[1]) + (b[0] - b[1])*(b[0] - b[1]));
}