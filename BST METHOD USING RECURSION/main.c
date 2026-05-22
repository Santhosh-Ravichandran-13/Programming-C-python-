#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int val){
    struct node*nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}

struct node*insert(struct node*root,int val){
    struct node*nn=createnode(val);
    if(root==NULL){
        return nn;
    }
    
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    
    return root;
}

void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->right);
    printf("%d ",root->data);
    inorder(root->left);
}

void preorder(struct node*root){
    if(root==NULL){
        return;
    }
     printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
   
    
}

void postorder(struct node*root){
     if(root==NULL){
         return;
     }
    postorder(root->right);
    postorder(root->left);
    printf("%d ",root->data);
    
}
bool check(struct node*root, int min, int max){

    if(root==NULL)
        return true;

    if(root->data <= min || root->data >= max)
        return false;

    return check(root->left,min,root->data) &&
           check(root->right,root->data,max);
}
int main(){
     struct node*root=NULL;
     int s;
      while(1){

        scanf("%d",&s);

        if(s==-1)
            break;

        root=insert(root,s);
    }
     printf("The Inorder :");
     inorder(root);
     printf("\nThe preorder :");
     preorder(root);
     printf("\nThe postorder :");
     postorder(root);
     if(check(root,-100000,100000))
    printf("\nValid BST\n");
else
    printf("\nNot a BST\n");
     return 0;
}