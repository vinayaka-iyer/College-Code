#include<stdio.h>

#define N 5
int stack[N];
int top = -1;

void push(){
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if(top == N-1){
        printf("Overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("Underflow'\n");
    }
    else{
        item = stack[top];
        top--;
        printf("The popped item is: %d\n",item);
    }
}

void peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("%d\n", stack[top]);
    }
}

void display(){
    int i;
    for(i = top; i >=0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    int ch;
    do{
        printf("Enter choice: 1.Push 2.Pop 3.Peek 4.Display 0.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 0:
                printf("Exiting program\n");
                break;
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }while(ch!=0);
    return 0;
}