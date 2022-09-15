#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        for(int j = 1; j <= i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
for(int i =0; i<n;i++){
    int k = 1;
    for(int j = n-i-1; j >0;j--){
        printf("%d ",k);
        k++;
        }
    printf("\n");
    }
}