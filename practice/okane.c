#include<stdio.h>
int main(void){
    int a,b,c,h,m,s;
    int i;
    h=0;
    m=0;
    s=0;
    scanf("%d", &a);
    printf("%d\n",a);
    b=a;
    
    while(b>=3600){
        b=b-3600;
        h++;
    }
    printf("%d:", h);
    
    c=(a-3600*h);
    while(c>=60){
        c=c-60;
        m++;
    }
    printf("%d:", m);
    

    printf("%d\n", a-3600*h-60*m);
    
    return 0;
}