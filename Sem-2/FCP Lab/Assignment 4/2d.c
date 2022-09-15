#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
        for(int j = 1; j<=i+1;j++){
            printf("%d",j);
        }
        if(n%2==0){
            for(int j = 2; j < 2*n-2*i ;j++){
                printf(" ");
            }
        }
        else{
            for(int j = 2; j < 2*n-2*i;j++){
                printf(" ");
            }

        }
        for(int j = i+1; j > 0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}