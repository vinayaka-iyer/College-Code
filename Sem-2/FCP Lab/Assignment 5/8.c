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

    int j = n-1;
    int ans = 0;
    for(int i = 0;i<n/2;i++){
        if(a[i]==a[j]){
            ans = 1;
        }
        else{
            ans = 0;
        }
        j--;
    }
    if(ans==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}