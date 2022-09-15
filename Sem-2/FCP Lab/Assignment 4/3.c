#include<stdio.h>

int main(){
    int a,b;
    int count = 0;
    scanf("%d %d",&a,&b);
    printf("even numbers between %d and %d:\n",a,b);
    for(int i = a+1; i<b;i++){
        if(i%2==0){
            printf("%d, ",i);
            count++;
        }
    }
    printf("\n");
    printf("the number of even numbers between %d and %d is = %d",a,b,count);
    return 0;
}