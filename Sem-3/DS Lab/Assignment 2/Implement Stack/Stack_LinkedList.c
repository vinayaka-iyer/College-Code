#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};

struct node *top = 0;

void push(int x){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void display(){
    struct node * temp;
    temp = top;
    if(top==0){
        printf("Stack is empty\n");
    }
    else{
        while(temp!=0){
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
}

void peek(){
    if(top==0){
        printf("Stack is empty\n");
    }
    else{
        printf("The top element is: %d\n", top->data);
    }
}

void pop(){
    struct node * temp;
    temp = top;
    if(top == 0){
        printf("Underflow\n");
    }
    else{
        printf("The popped element is: %d\n",top->data);
        top = top->link;
        free(temp);
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
                printf("Enter element to be pushed: ");
                int x;
                scanf("%d", &x);
                push(x);
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