#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int num = n;
    int numofdigits = 0;
    while(n!=0){
        n = n/10;
        numofdigits++;
    }

    n = num;
    while(n!=0){
        int digit = n%10;
        sum = sum + (pow(digit,numofdigits)+0.5);
        n=n/10;
    }

    if(sum==num){
        printf("the given number %d is an armstrong number\n",num);
    }
    else{
        printf("the given number %d is not an armstrong number\n",num);
    }
}