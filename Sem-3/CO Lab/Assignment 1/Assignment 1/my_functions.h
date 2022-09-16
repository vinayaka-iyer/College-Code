//Header files
#include<bits/stdc++.h>
using namespace std;

//Binary to decimal
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

//Decimal to binary
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

//Factorial
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

//Signed 8-bit binary to decimal
int signedBinaryToDecimal(int n){
    int decimal = 0, i = 0, remainder;
    //Two's Compliment.
    //n = ~n + 1;
    //Conversion to Decimal.
    while (n != 0){
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2,i);
        ++i;
    }
    decimal = (decimal + 128)%256 - 128;
    return decimal;
}

//Signed 8-bit decimal to binary
int signedDecimalToBinary(unsigned int dec){
    char binary[9] = {0}; 
    int i = 8; // subscript of current character
    do 
    {
        binary[--i] = '0' + dec % 2;
        dec /= 2;
    } while (dec);
    int ans = atoi(binary);
    return ans;
}

//Signed 8-bit Binary Addition
int signedBinaryAddition(int a, int b){
    int num_a = signedBinaryToDecimal(a);
    int num_b = signedBinaryToDecimal(b);
    int c = num_a+num_b;
    int ans = signedDecimalToBinary(c);
    return ans;
}



