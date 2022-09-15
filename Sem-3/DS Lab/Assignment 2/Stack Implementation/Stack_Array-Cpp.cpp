#include<iostream>
using namespace std;

//initialize global variables
#define size 5
int A[size];
int top = -1;

//isEmpty
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else {
        return false;
    }
}

//push
void push(int value){
    if(top==size-1){
        cout << "stack is full\n";
    }
    else{
        top++;
        A[top] = value;
    }
}

//pop
void pop(){
    if(isEmpty()){
        cout << "stack is empty\n";
    }
    else{
        top--;
    }
}

//showTop
void showTop(){
    if(isEmpty()){
        "stack is empty\n";
    }
    else{
        cout << "element at top is " << A[top] <<endl;
    }
}

//display
void display(){
    if(isEmpty()){
        cout << "stack is empty\n";
    }
    else{
        for(int i = 0; i <= top; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
}


int main(){

    //menu driven program
    int choice;
    int flag = 1;
    int value;

    while(flag==1){
        cout << " 1. push \n 2. pop \n 3.showTop \n 4. display \n 5.exit \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            showTop();
            break;
        case 4:
            display();
            break;

        case 5:
            flag = 0;
            break;
        }
    }
    return 0;
}