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
    
    int x;
    int pos;
    scanf("%d %d", &x, &pos);
    for(int i = n-1; i>=pos; i--){
        a[i] = a[i-1];
    }
    a[pos-1] = x;
    for(int i=0; i < n+1; i++){
        printf("%d, ",a[i]);
    }
    return 0;
}