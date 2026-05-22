#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;};
struct node *h[10] = {NULL};
void insert(int x) {
    int i = x % 10;
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    n->next = h[i];
    h[i] = n;}
void show() {
    int i;
    struct node *t;
    for (i = 0; i < 10; i++) {
        printf("%d: ", i);
        t = h[i];
        while (t) {
            printf("%d -> ", t->data);
            t = t->next;
        }
        printf("NULL\n");}}
int main() {
    printf("Santhosh R\n");
    int n, x, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(x);
    }
    show();
}
