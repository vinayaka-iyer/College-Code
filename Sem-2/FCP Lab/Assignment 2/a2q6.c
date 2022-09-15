#include<stdio.h>

int main(){
    float num;
    int new;
    printf("enter a floating point value: ");
    scanf("%f",&num);
    new = (int)num%10;
    printf("the rightmost integral part is %d",new);
    return 0;
}