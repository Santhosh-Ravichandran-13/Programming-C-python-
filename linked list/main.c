#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct node {
    int data;
    struct node *next;
};

/* Head pointer */
struct node *head = NULL;

/* Count nodes */
int count_nodes() {
    int c = 0;
    struct node *temp = head;
    while (temp != NULL) {
        c++;
        temp = temp->next;
    }
    return c;
}

/* Add at beginning */
void add_begin() {
    struct node *nn = malloc(sizeof(struct node));
    if (nn == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &nn->data);

    nn->next = head;
    head = nn;
}

/* Add at end */
void add_end() {
    struct node *nn = malloc(sizeof(struct node));
    if (nn == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &nn->data);
    nn->next = NULL;

    if (head == NULL) {
        head = nn;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = nn;
}

/* Add at position */
void add_pos(int p) {
    int n = count_nodes();

    if (p < 1 || p > n + 1) {
        printf("Invalid position\n");
        return;
    }

    if (p == 1) {
        add_begin();
        return;
    }

    struct node *nn = malloc(sizeof(struct node));
    if (nn == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &nn->data);

    struct node *temp = head;
    for (int i = 1; i < p - 1; i++)
        temp = temp->next;

    nn->next = temp->next;
    temp->next = nn;
}

/* Add at middle */
void add_mid() {
    int mid = (count_nodes() / 2) + 1;
    add_pos(mid);
}

/* Delete at beginning */
void delete_begin() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

/* Delete at end */
void delete_end() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

/* Delete at position */
void delete_pos(int p) {
    int n = count_nodes();

    if (p < 1 || p > n) {
        printf("Invalid position\n");
        return;
    }

    if (p == 1) {
        delete_begin();
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    for (int i = 1; i < p; i++) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

/* Display list */
void display() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Free entire list */
void free_list() {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

/* Main function */
int main() {
    int op, pos;

    while (1) {
        printf("\n--- Singly Linked List ---\n");
        printf("1. Add at begin\n");
        printf("2. Add at end\n");
        printf("3. Add at position\n");
        printf("4. Add at middle\n");
        printf("5. Delete at begin\n");
        printf("6. Delete at end\n");
        printf("7. Delete at position\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("Enter option: ");
        if (scanf("%d", &op) != 1) {
            printf("Invalid input\n");
            break;
        }

        switch (op) {
            case 1: add_begin(); break;
            case 2: add_end(); break;
            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                add_pos(pos);
                break;
            case 4: add_mid(); break;
            case 5: delete_begin(); break;
            case 6: delete_end(); break;
            case 7:
                printf("Enter position: ");
                scanf("%d", &pos);
                delete_pos(pos);
                break;
            case 8: display(); break;
            case 9:
                free_list();
                exit(0);
            default:
                printf("Invalid option\n");
        }
    }

    free_list();
    return 0;
}
