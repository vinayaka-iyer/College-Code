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
    scanf("%d", &x);
    for(int i = 0; i<n; i++){
        if(a[i] == x){
            pos = i;
        }
    }
    for(int i = pos; i<n-1; i++){
        a[i] = a[i+1];
    }
    for(int i=0; i < n-1; i++){
        printf("%d, ",a[i]);
    }

    return 0;
}