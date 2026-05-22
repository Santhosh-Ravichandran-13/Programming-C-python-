#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int queue[MAX]; int front = 0, rear = 0;
void addToken() {
    if (rear == MAX) { printf("Queue is full!\n");
        return;}
    int token;
    printf("Enter token number: "); scanf("%d", &token);
    queue[rear++] = token;
    printf("Token %d added.\n", token);}
void serveToken() {
    if (front == rear) { printf("No tokens to serve!\n");
        return;}
    printf("Serving token: %d\n", queue[front++]);}
void displayQueue() {
    if (front == rear) {
        printf("Queue is empty.\n"); return;}
    printf("Tokens in queue: ");
    for (int i = front; i < rear; i++) {
        printf("%d ", queue[i]);}
    printf("\n");}
int main() {
    printf("Santhosh R\n"); int choice;
    while (1) {
        printf("1. Add Token\n2. Serve Token\n3. Display Queue\n4. Exit\n");
        printf("Enter choice: "); scanf("%d", &choice);
        switch (choice) {
            case 1: addToken(); break;
            case 2: serveToken(); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");}}
return 0;}
