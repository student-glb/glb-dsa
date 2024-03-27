#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
/////////////////////////////////// insert newnode

struct Node* insert_node_BST(struct Node *root, struct Node *newnode)
{
    printf("==========Inserting Nenode   ... in progress.........");
    if(root==NULL)
        return root;
    if(root->data>newnode->data)
         root->left=insert_node_BST(root->left, newnode);
    else
         root->right=insert_node_BST(root->right, newnode);
}
///////////////////////////// print BST 
void display_inorder(struct Node *root)
{
    if(root == NULL)
    {
        printf("tree is empty");
        return;
    }
    display_inorder(root->left);
    printf(" %d",root->data);
    display_inorder(root->right);
    
}

int main()
{
    int i=0,item;
    struct Node *root=NULL;
    //struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data=> ");
    scanf("%d",&item);
    //newnode->left=NULL;
    //newnode->right=NULL;
    //root=insert_node_BST(root,newnode);
    printf("======%d",item);
    display_inorder(root);

    do{
     printf("===Welcome=========");
     printf("1. Insert New Node in BST\nDisplay BST\n");
     i=i+1;
     switch(i)
     {
        case 1: printf("==%d\n",i);break;
        case 2: printf("==%d\n",i);break;
        case 3: printf("==%d\n",i);break;
        case 4: printf("==%d\n",i);break;
        case 5: printf("==%d\n",i);break;
        case 6: printf("==%d\n",i);break;
     }
    }while(i<6);
    return 0;
}