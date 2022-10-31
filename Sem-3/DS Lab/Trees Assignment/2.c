#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*left;
    struct node*right;
    int data;
};
void inOrder(struct node*root)
{
    if(root==NULL){printf("Enter nodes first\n");return;}
    if(root->left!=NULL){
        inOrder(root->left);
    }
    if(root->data!=-1){
    printf("%d ",root->data);}
    if(root->right!=NULL){
        inOrder(root->right);
    }
    else{
        return;
    }
}
void addNode(struct node* root,struct node*val){
    struct node* cur=root;
    if(val->data<=root->data)
    {
        if(root->left==NULL)
        {root->left=val;}
        else{
            addNode(root->left,val);
        }
    }
    else if(val->data>root->data)
    {
        if(root->right==NULL){
            root->right=val;
        }
        else{
            addNode(root->right,val);
        }
    }
}
struct node* inorderSuccessor(struct node*root){
    root=root->right;
    while(root!=NULL){
        root=root->left;
        if(root->left==NULL){
            return root;
        }
    }

}
struct node* delNode(struct node*head,struct node*root,int val){
    struct node*temp;
    if(root==NULL){return head;}
    if(root->data==val){
        if(root->left==NULL&&root->right==NULL){
            root->data=-1;
            root=NULL;
        }
        else if(root->left!=NULL){
            root->data=(root->left)->data;
            root->right=(root->left)->right;
            root->left=(root->left)->left;
            root=root->left;
            root=NULL;
        }
        else if(root->right!=NULL){
            root->data=(root->right)->data;
            root->right=(root->right)->right;
            root->left=(root->right)->left;
            root=root->right;
            root=NULL;
        }
        else{
            struct node*temp=inorderSuccessor(root);
            root->data=temp->data;
            temp=NULL;
        }
    }
    else if(root->data>val){
        delNode(head,root->left,val);
    }
    else{
        delNode(head,root->right,val);
    }
        return head;
}

int searchNode(struct node*root,int val){
    if(root==NULL){
        return -1;
    }
    if(root->data==val){
        return 1;
    }
    else if(root->data>val){
        searchNode(root->left,val);
    }
    else{
        searchNode(root->right,val);
    }
    return 0;
}
void main(){
    int count=0,choice,val,x;
    struct node*root=NULL,*temp;
    int arr[12] = {25,20,10,22,5,12,36,30,28,40,38,48};
    for(int i = 0; i < 12; i++){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->left=NULL;
        temp->right=NULL;
        temp->data = arr[i];
    
        if(count==0){root=temp;count++;}
        else{
            addNode(root,temp);
        }
    }
    do{
        printf("--------Program to implement Binary tree functions--------\n");
        printf("1. Enter 1 to add node\n2. Enter 2 to delete node\n3. Enter x   3 to search node\n4. Enter 4 to display tree (inorder traversal)\n5. Enter 5 to exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                temp=(struct node*)malloc(sizeof(struct node));
                temp->left=NULL;
                temp->right=NULL;
                printf("Enter data : ");
                scanf("%d",&temp->data);
                if(count==0){root=temp;count++;}
                else{
                    addNode(root,temp);
                }
                break;
            case 2:
                printf("Enter element to delete : ");
                scanf("%d",&val);
                delNode(root,root,val);
                break;
            case 3:
                printf("Enter element to search : ");
                scanf("%d",&val);
                x=0;
                x=searchNode(root,val);
                if(x==1){printf("Node exists\n");}
                else{printf("Node doesn't exist\n");}
                break;
            case 4:
                inOrder(root);
                printf("\n");
                break;
            case 5:
                break;
            default:
                printf("Enter correct value");
                break;
        }
    }while(choice!=5);
}