#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i<=n; i++){
        int count = i;
        for(int j = n; j>n-i;j--){
            printf("%d ",(count*count));
            count--;
        }   
        printf("\n");
    }
    return 0;
}