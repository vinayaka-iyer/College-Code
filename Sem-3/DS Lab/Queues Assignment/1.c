#include<stdio.h>
int front=-1,rear=-1;
void check(){
    if(front>rear)
    {
        front=rear=-1;
    }
}
void main()
{
    int queue[20],choice,i;
    do{
        printf("--------Welcome to Printer spooler program--------\n");
        printf("1. Enter 1 to queue operation at the end\n2. Enter 2 to perform operation\n3. Enter 3 to display queue\n4. Enter 4 to exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter operation number : ");
                scanf("%d",&queue[rear+1]);
                front=0;
                rear++;
                break;
            case 2:
                if(front>=0){
                    printf("Operation %d was performed\n",queue[front]);
                    front++;
                }
                else{
                    printf("Queue is empty\n");
                }
                break;
            case 3:
                if(front==-1){printf("Queue is empty\n");}
                else{
                    printf("Queue = ");
                    for(i=front;i<=rear;i++)
                    {
                        printf("%d ",queue[i]);
                    }
                    printf("\n");
                }
                break;
        }
        check();
    }while(choice!=4);  
}