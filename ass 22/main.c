#include <stdio.h>

#define SIZE 10

char queue[SIZE][50];
int front = -1, rear = -1;

// Send message (enqueue)
void send() {
    if (rear == SIZE - 1) {
        printf("Queue full\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    printf("Enter message: ");
    scanf(" %[^\n]", queue[rear]);

    printf("Message sent successfully\n");
}

// Receive message (dequeue)
void receive() {
    if (front == -1 || front > rear) {
        printf("No messages\n");
        return;
    }

    printf("Message received: %s\n", queue[front]);
    front++;
}

int main() {
    printf("Santhosh R\n");

    int ch;

    while (1) {
        printf("\n1. Send Message\n2. Receive Message\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                send();
                break;

            case 2:
                receive();
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}