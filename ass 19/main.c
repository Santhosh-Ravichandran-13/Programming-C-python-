#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int front = -1, rear = -1;

// Function to book ticket (enqueue)
void book(int x) {
    if (rear == SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = x;
        printf("Booking successful for customer ID: %d\n", x);
    }
}

// Function to issue ticket (dequeue)
void serve() {
    if (front == -1 || front > rear) {
        printf("No reservations\n");
    } else {
        printf("Ticket issued to customer ID: %d\n", queue[front]);
        front++;
    }
}

int main() {
    printf("Santhosh R\n");

    int ch, x;

    while (1) {
        printf("\n1. Book Ticket\n2. Issue Ticket\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter customer ID: ");
                scanf("%d", &x);
                book(x);
                break;

            case 2:
                serve();
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}