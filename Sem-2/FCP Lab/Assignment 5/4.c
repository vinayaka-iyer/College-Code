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
    
    int max = 0;
    int min = 100;
    int indexofmax, indexofmin;
    for(int i = 0; i<n;i++){
        if(a[i] > max){
            max = a[i];
            indexofmax = i;
        }
        if(a[i] < min){
            min = a[i];
            indexofmin = i;
        }
    }
    int temp = a[indexofmax];
    a[indexofmax] = a[indexofmin];
    a[indexofmin] = temp;
    for(int i=0; i < n; i++){
        printf("%d, ",a[i]);
    }
    return 0;
}