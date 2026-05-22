#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char clue[100];       // Increased size for longer clues
    struct node *next;
};

struct node *head = NULL;

int main() {
    printf("Santhosh R");   // Fixed newline
    int choice;
    struct node *newnode, *temp;

    while (1) {
        printf("\n1. Add Clue\n2. Show Clues\n3. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // Handle invalid input
            printf("Invalid input! Exiting.\n");
            break;
        }
        getchar(); // consume newline left by scanf

        if (choice == 1) {
            newnode = (struct node*)malloc(sizeof(struct node));
            if (newnode == NULL) {
                printf("Memory allocation failed!\n");
                continue;
            }

            printf("Enter clue: ");
            fgets(newnode->clue, sizeof(newnode->clue), stdin);
            // Remove newline character from fgets
            newnode->clue[strcspn(newnode->clue, "\n")] = '\0';
            newnode->next = NULL;

            if (head == NULL) {
                head = newnode;
            } else {
                temp = head;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode;
            }

            printf("Clue added successfully!\n");

        } else if (choice == 2) {
            if (head == NULL) {
                printf("No clues available.\n");
            } else {
                temp = head;
                while (temp != NULL) {
                    printf("%s -> ", temp->clue);
                    temp = temp->next;
                }
                printf("TREASURE\n");
            }

        } else if (choice == 3) {
            // Free all nodes before exiting
            temp = head;
            while (temp != NULL) {
                struct node *next = temp->next;
                free(temp);
                temp = next;
            }
            printf("Exiting...\n");
            break;

        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}