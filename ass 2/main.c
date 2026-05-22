#include <stdio.h>
#include <stdlib.h>
struct node {
    char name[20];
    struct node *next;
};
struct node *head = NULL;
int main() {
    printf("Santhosh R\n");
    int choice;
    struct node *newnode, *temp;
    while (1) {
        printf("\n1.Add Person\n2.Show Congo Line\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter name: ");
            scanf("%s", newnode->name);
            newnode->next = NULL;
            if (head == NULL)
                head = newnode;
            else {
                temp = head;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode;
            }
        }
        else if (choice == 2) {
            temp = head;
            if (temp == NULL)
                printf("Line is empty\n");
            else {
                printf("Congo Line:\n");
                while (temp != NULL) {
                    printf("%s -> ", temp->name);
                    temp = temp->next;
                }
                printf("END\n");
            }
        }
        else
            break;
    }
    return 0;
}
