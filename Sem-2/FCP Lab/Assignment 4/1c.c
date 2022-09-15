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
    float n, x;
    float sum = 0;
    scanf("%f %f", &n, &x);
    for(int i = 0; i<=n; i++){
        float num, element;
        if(i==0){
            element = x;
        }
        else{
            num = i + 2;
            element = pow(x,num)/fact(num);
        }
        if(i%2==0){
            sum+=element; 
        }
        else{
            sum-=element;
        }
    }
    printf("value of series= %f",sum);
    return 0;
}
