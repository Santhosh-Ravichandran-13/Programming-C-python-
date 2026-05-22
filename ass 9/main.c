#include <stdio.h>
#include <stdlib.h>
struct node {
    int device;
    struct node *next;};
struct node *head = NULL;
void addDevice(int d) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->device = d;
    newnode->next = NULL;
    if (!head) head = newnode;
    else {
        struct node *temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newnode;}}
void deleteDevice(int d) {
    struct node *temp = head, *prev = NULL;
    while (temp && temp->device != d) {
        prev = temp;
        temp = temp->next;}
    if (!temp) {
        printf("Device %d not found\n", d);
        return; }
    if (prev) prev->next = temp->next;
    else head = temp->next;
    free(temp);
    printf("\nDevice %d deleted\n\n", d);}
void display() {
    if (!head) {
        printf("No devices\n\n");
        return;}
    printf("Device List:\n");
    struct node *temp = head;
    while (temp) {
        printf("Device %d\n", temp->device);
        temp = temp->next;}
    printf("\n"); }
int main() {
    printf("Santhosh R\n");
    int n, i, d, del;
    printf("Enter number of devices: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter device id: ");
        scanf("%d", &d);
        addDevice(d);
 }
    display();
    printf("Enter device id to delete: ");
    scanf("%d", &del);
    deleteDevice(del);
    display();
    return 0;}
