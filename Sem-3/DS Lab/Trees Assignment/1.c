#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
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
void inOrder(struct node*root)
{
    if(root->left!=NULL){
        inOrder(root->left);
    }
    printf("%d ",root->data);
    if(root->right!=NULL){
        inOrder(root->right);
    }
    else{
        return;
    }
}
void preOrder(struct node*root)
{
    printf("%d ",root->data);
    if(root->left!=NULL){preOrder(root->left);}
    if(root->right!=NULL){preOrder(root->right);}
}
void postOrder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL){postOrder(root->left);}
    if(root->right!=NULL){postOrder(root->right);}
    printf("%d ",root->data);
}
int height(struct node* root)
{
    if(root==NULL){return 0;}
    else{
        int ldepth=height(root->left);
        int rdepth=height(root->right);
        return ldepth>rdepth+1?ldepth:rdepth+1;
    }
}
void leafNode(struct node*root)
{
    if(root==NULL){
        return;
    }
    leafNode(root->left);
    if(root->left==NULL&&root->right==NULL)
    {
        printf("%d ",root->data);
    }
    leafNode(root->right);
}
void main()
{
    int arr[12] = {25,20,10,22,5,12,36,30,28,40,38,48};
    struct node*temp,*cur,*root;
    char a;
    int count=0;
    printf("--------Program to implement Binary tree--------\n");

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
    // printf("Enter y to add node or Press any key to display Binary tree:\n");
    // scanf("%c",&a);
    // while(a == 'y')
    // {
    //     temp=(struct node*)malloc(sizeof(struct node));
    //     temp->left=NULL;
    //     temp->right=NULL;
    //     printf("Enter data : ");
    //     scanf("%d",&temp->data);
    //     if(count==0){root=temp;count++;}
    //     else{
    //         addNode(root,temp);
    //     }
    //     printf("Enter y to add node : ");
    //     scanf(" %c",&a);
    // }

    printf("InOrder = ");
    inOrder(root);
    printf("\n");
    printf("PreOrder = ");
    preOrder(root);
    printf("\n");
    printf("PostOrder = ");
    postOrder(root);
    printf("\n");
    printf("Height = %d\n",height(root));
    printf("Leaf Nodes = ");
    leafNode(root);
}