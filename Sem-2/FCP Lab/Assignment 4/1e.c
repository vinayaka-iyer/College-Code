#include<stdio.h>
#include<math.h>

int fact(int n){
    int factorial = 1;
    for(int i = 1;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}

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
        sum = sum + fact(digit);
        n=n/10;
    }

    if(sum==num){
        printf("the given number %d is a strong number\n",num);
    }
    else{
        printf("the given number %d is not a strong number\n",num);
    }
}