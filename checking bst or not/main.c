#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>
#include <stdbool.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

/* Create Node */
struct node* createnode(int val){
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data = val;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

/* BST Check Function */
bool checkBST(struct node* root, int min, int max){

    if(root == NULL)
        return true;

    if(root->data <= min || root->data >= max)
        return false;

    return checkBST(root->left, min, root->data) &&
           checkBST(root->right, root->data, max);
}

/* Inorder traversal (for display) */
void inorder(struct node* root){
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main(){

    /* Manually creating a tree */

 struct node* root = createnode(90);
root->left = createnode(30);
root->right = createnode(100);

root->right->left = createnode(20);
root->left->right = createnode(40);

root->right->right = createnode(95);  // ❌ This breaks BST rule

    printf("Tree (Inorder): ");
    inorder(root);

    if(checkBST(root, -100, 10000))
        printf("\nValid BST\n");
    else
        printf("\nInvalid BST\n");

    return 0;
}