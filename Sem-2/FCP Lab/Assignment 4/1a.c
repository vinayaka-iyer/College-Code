#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    int i = 1;
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++){
        if(i==1){
            sum = sum + 1;
        }

        else if(i%2==0){
            sum = sum + i*i;
        }
        else{
            sum = sum - i*i;
        }
    } 
    printf("value of series = %d",sum);
    return 0;
}