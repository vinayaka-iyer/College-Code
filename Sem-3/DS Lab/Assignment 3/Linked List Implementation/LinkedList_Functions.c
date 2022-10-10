#include <stdio.h>
#include <stdlib.h>
void creation();
void display();
void insertion();
void deletion();
void search();
int length();
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *newnode, *head, *nextnode;
int main()
{
    int ch;
    while (1)
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            creation();
            break;
        case 2:
            display();
            break;
        case 3:
            insertion();
            break;
        case 4:
            deletion();
            break;
        case 5:
            search();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
void creation()
{
    int x = 1;
    head = NULL;
    while (x)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == NULL)
            temp = head = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter 0 to stop or 1 to continue\n");
        scanf("%d", &x);
    }
}

void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insertion()
{
    int pos, i = 1, x;
    x = length();
    temp = head;
    printf("Enter position ");
    scanf("%d", &pos);
    if (pos > x)
        printf("Invalid Positon");
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deletion()
{
    int pos, i = 1, y;
    y = length();
    temp = head;
    printf("Enter Position ");
    scanf("%d", &pos);
    if (pos > y)
        printf("Invalid Position");
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
}
void search()
{
    int key, flag = 0;
    temp = head;
    printf("Enter key: ");
    scanf("%d", &key);
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            flag = 1;
        }
        temp = temp->next;
    }
    if (flag == 1)
        printf("Key is found");
    else
        printf("Key is not found");
}
int length()
{
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}