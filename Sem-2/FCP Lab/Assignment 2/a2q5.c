#include<stdio.h>

int main(){
    int a,b,temp;
    scanf("%d %d",&a,&b);
    printf("value of a is %d, value of b is %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("value of a is %d, value of b is %d",a,b);
    return 0;
}