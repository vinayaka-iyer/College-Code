#include<iostream>
using namespace std;

void Half_Adder(int A,int B){
    //initialize the variables Sum and Carry
    int Sum , Carry;
    
    // Calculating value of sum by applying A XOR B
    Sum = A ^ B;
    
    // Calculating value of Carry by applying A AND B
    Carry = A & B;
    
    // printing the values
    cout<<"Sum = "<< Sum << endl;
    cout<<"Carry = "<<Carry<< endl;
}

int main(){
    Half_Adder(0,1);
    return 0;
}