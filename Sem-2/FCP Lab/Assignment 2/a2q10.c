#include<stdio.h>

int main(){
    float inch, cm;
    printf("enter the distance in inches\n");
    scanf("%f",&inch);
    cm = 2.54 * inch;
    printf("%f inches in centimeters is %f cm",inch,cm);
    return 0;
}