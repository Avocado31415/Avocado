#include <stdio.h>
#include "list7-3-calc.h"
#include "list7-3-showResult.h"
 
void main(){
    int a = 2,b = 3;
    printf("%d + %d = ",a,b);
    add(a,b);
    showAnswer();
    printf("%d - %d = ",a,b);
    sub(a,b);
    showAnswer();
}