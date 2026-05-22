#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;};
int main() {
    printf("Santhosh R\n");
    int n, k, i;
    struct node *head = NULL, *temp, *newnode;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = i;
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->next = newnode;
        temp = newnode; }
temp->next = head; 
    temp = head;
    while (temp->next != temp) {
        for (i = 1; i < k; i++)
            temp = temp->next;
        printf("Eliminated : %d\n", temp->data);
        temp->data = temp->next->data;
        temp->next = temp->next->next; }
    printf("Winner: %d", temp->data);
    return 0;}
