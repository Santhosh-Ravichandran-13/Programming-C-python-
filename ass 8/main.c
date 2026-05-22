#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char name[20];
    int priority;
    struct node *next;};
struct node *head = NULL;
int main() {
    printf("Santhosh R\n");
    int n, i, p;
    char name[20];
    struct node *temp;
    printf("Enter the no.of process ");
    scanf("%d", &n); 
    for(i=0;i<n;i++){
        scanf("%s %d", name, &p);
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        strcpy(newnode->name,name);
        newnode->priority = p;
        newnode->next = NULL;
        if(!head) head = newnode;
        else {
            temp = head;
            while(temp->next) temp = temp->next;
            temp->next = newnode;}}
    temp = head;
    while(temp){
        printf("Process: %s, Priority: %d\n", temp->name, temp->priority);
        temp = temp->next;}}
