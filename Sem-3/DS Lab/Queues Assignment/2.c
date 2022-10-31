#include<stdio.h>
int front=-1,rear=-1;
void main()
{
    int queue[20],choice,i;
    do{
        printf("--------Program for Stack implemented using Queue--------\n");
        printf("1. Enter 1 to push operation\n2. Enter 2 to pop operation\n3. Enter 3 to display queue\n4. Enter 4 to exit\n");
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
                    printf("Operation %d was performed\n",queue[rear]);
                    rear--;
                }
                else{
                    printf("Queue is empty\n");
                }
                break;
            case 3:
                if(front==-1){printf("Queue is empty\n");}
                else{
                    printf("Queue = ");
                    for(i=rear;i>=front;i--)
                    {
                        printf("%d ",queue[i]);
                    }
                    printf("\n");
                }
                break;
        }
    }while(choice!=4);
}