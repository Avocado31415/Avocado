#include <stdio.h>
#include <math.h>

int main(void){
    float K[5], v[5], ave=0.0;
    int i,j;
    K[0]=-1.25;
    K[1]=-0.8;
    K[2]=-0.6;
    K[3]=0.0;
    K[4]=0.9;
    v[0]=7.0;
    v[1]=7.6666;
    v[2]=8.375;
    v[3]=9.9999;
    v[4]=12.0625;

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            printf("%f*10^-33",((K[i]-K[j])*1.6)/((v[i]-v[j])));
            printf("　　本来との差は%f\n",((K[i]-K[j])*1.6)/((v[i]-v[j]))-0.6626);
            ave+=((K[i]-K[j])*1.6)/((v[i]-v[j]));
        }
    }
    printf("\n平均：%f*10^-33\n",ave/10);
}