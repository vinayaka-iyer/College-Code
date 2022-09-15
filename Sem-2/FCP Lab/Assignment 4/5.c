#include<stdio.h>

int main(){
    int a,b, digit1, digit2;
    int sum = 0;
    scanf("%d %d", &a,&b);
    while(a>0){
        digit1 = a%10;
        a=a/10;
        digit2 = b%10;
        b=b/10;
        sum = sum + digit1*digit2;
    }
    printf("%d",sum);
    return 0;
}