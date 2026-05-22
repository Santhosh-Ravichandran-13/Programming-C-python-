#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Iterative Insert
struct Node* insert(struct Node* root, int value)
{
    struct Node* newNode = createNode(value);

    if(root == NULL)
        return newNode;

    struct Node* current = root;
    struct Node* parent = NULL;

    while(current != NULL)
    {
        parent = current;

        if(value < current->data)
            current = current->left;
        else
            current = current->right;
    }

    if(value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

// Inorder Traversal (Iterative)
void inorder(struct Node* root)
{
    struct Node* stack[100];
    int top = -1;
    struct Node* current = root;

    while(current != NULL || top != -1)
    {
        while(current != NULL)
        {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        printf("%d ", current->data);

        current = current->right;
    }
}

// Preorder Traversal (Iterative)
void preorder(struct Node* root)
{
    if(root == NULL)
        return;

    struct Node* stack[100];
    int top = -1;

    stack[++top] = root;

    while(top != -1)
    {
        struct Node* current = stack[top--];
        printf("%d ", current->data);

        if(current->right)
            stack[++top] = current->right;

        if(current->left)
            stack[++top] = current->left;
    }
}

// Postorder Traversal (Iterative)
void postorder(struct Node* root)
{
    if(root == NULL)
        return;

    struct Node* stack1[100];
    struct Node* stack2[100];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;

    while(top1 != -1)
    {
        struct Node* current = stack1[top1--];
        stack2[++top2] = current;

        if(current->left)
            stack1[++top1] = current->left;

        if(current->right)
            stack1[++top1] = current->right;
    }

    while(top2 != -1)
    {
        printf("%d ", stack2[top2--]->data);
    }
}

int main()
{
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}