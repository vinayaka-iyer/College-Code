// header files
#include<iostream>
#include<math.h>
using namespace std;

// binary to decimal
int binaryToDecimal(int n){
    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if( digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;

    }
    return ans;
}

//decimal to binary
int decimalToBinary(int n){
    int ans  = 0;
    int i = 0;
    
    while(n != 0 ) {
        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

//factorial
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

//Binary addition
int binaryAddition(int a, int b){
    int num_a = binaryToDecimal(a);
    int num_b = binaryToDecimal(b);
    int c = num_a + num_b;
    int ans = decimalToBinary(c%256);
    return ans;
}