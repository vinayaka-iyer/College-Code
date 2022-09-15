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
    
    int counteven = 0;
    int countodd = 0;
    for(int i = 0; i<n;i++){
        if(a[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("total number of odd elements = %d\n",countodd);
    printf("total number of even elements = %d",counteven);
    return 0;
}