#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        sum = sum + i*i;
    }
    printf("value of series= %d",sum);
    return 0;
}