#include <stdio.h>
#include <stdlib.h>

/* Stack node */
struct node {
    int data;
    struct node *next;
};

/* Top of stack */
struct node *top = NULL;

/* Check if stack is empty */
int is_empty() {
    return top == NULL;
}

/* Push operation */
void push() {
    struct node *nn = malloc(sizeof(struct node));
    if (nn == NULL) {
        printf("Stack overflow (memory allocation failed)\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &nn->data);

    nn->next = top;
    top = nn;
}

/* Pop operation */
void pop() {
    if (is_empty()) {
        printf("Stack underflow\n");
        return;
    }

    struct node *temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

/* Peek operation */
void peek() {
    if (is_empty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}

/* Display stack */
void display() {
    if (is_empty()) {
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = top;
    printf("Stack (top -> bottom):\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

/* Free entire stack */
void free_stack() {
    struct node *temp;
    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

/* Main function */
int main() {
    int op;

    while (1) {
        printf("\n--- Stack using Linked List ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter option: ");
        if (scanf("%d", &op) != 1) {
            printf("Invalid input\n");
            break;
        }

        switch (op) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5:
                free_stack();
                exit(0);
            default:
                printf("Invalid option\n");
        }
    }

    free_stack();
    return 0;
}
