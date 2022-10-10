#include <stdio.h>
#include <stdlib.h>

#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
struct node {
   int data;
   struct node *next;
};

struct node *createList(int *arr, int n){
   struct node *head, *p;
   p = head = malloc(sizeof(struct node));
   head->data = arr[0];
   head->next = NULL;
   for (int i = 1; i < n; ++i) {
      p->next = malloc(sizeof(struct node));
      p = p->next;
      p->data = arr[i];
      p->next = NULL;
   }
return head;
}
void displayList(struct node *head){
   while (head != NULL) {
      printf("%d ",head->data);
      head = head->next;
   }
   printf("\n");
}
struct node *mergeSortedLists(struct node *head1, struct node *head2){
   struct node *result = NULL;
   if (head1 == NULL) {
      return head2;
   }
   if (head2 == NULL) {
      return head1;
   }
   if (head1->data < head2->data) {
      result = head1;
      result->next = mergeSortedLists(head1->next, head2);
   } else {
      result = head2;
      result->next = mergeSortedLists(head1, head2->next);
   }
   return result;
}
int main(){
   int arr1[] = {10, 15, 17, 20};
   int arr2[] = {5, 9, 13, 19};
   struct node *head1, *head2, *result = NULL;
   head1 = createList(arr1, SIZE(arr1));
   head2 = createList(arr2, SIZE(arr1));
   printf("First sorted list: \n");
   displayList(head1);
   printf("Second sorted list: \n");
   displayList(head2);
   result = mergeSortedLists(head1, head2);
   printf("Final sorted list: \n");
   displayList(result);
   return 0;
}