#include<stdio.h>

int main(){
    int n;               
    printf("\nEnter the size of array ");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    int a[n];             
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    
    int sum = 0;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum = sum + a[i]%a[j];
        }
    }
    printf("%d",sum);
    return 0;
}