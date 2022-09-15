#include "my_functions.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[100];
    char substr[100];

    cin.getline(str1,100);
    cin >> substr;
    substringPresent(str1, substr);

    return 0;
}