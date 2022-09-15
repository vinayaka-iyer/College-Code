#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the length of the 3 sides of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("equilateral triangle");
    }
    else if(a==b || b==c ||a==c){
        printf("isosceles triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}