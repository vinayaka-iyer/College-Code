#include "my_functions.h"
#include<iostream>
using namespace std;

int main(){
    char str1[100];
    char a;

    cin >> str1;
    cin >> a;
    cout << firstOccurance(str1, a);

    return 0;
}