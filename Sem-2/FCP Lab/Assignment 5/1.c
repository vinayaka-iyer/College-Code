#include<stdio.h>
int main(){
    //assuming array1 and array2 are of same size
    int n;               
    printf("\nEnter the size of array ");
    scanf("%d",&n);
    printf("\nEnter the array elements for array 1: ");
    int a[n];             
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    printf("\nEnter the array elements for array 2: ");
    int b[n];             
    for(int i=0;i<n;i++){
       scanf("%d",&b[i]);
    }
    
    int c[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        c[i] = a[i] + b[i];
        sum = sum + c[i];
        printf("%d, ", c[i]);
    }
    printf("\n");
    float average = sum/n;
    printf("average = %.2f",average);
    return 0;
}