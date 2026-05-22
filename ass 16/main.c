#include <stdio.h>
#define MAX 100
int stack[MAX], top=-1;
void storeData(int data) {
    stack[++top] = data;  printf("Data %d stored\n", data);}
void restoreData() {
    if(top == -1) {
        printf("No data to restore\n"); return;}
    printf("Data %d restored\n", stack[top--]);}
void displayStack() {
    if(top==-1) {
        printf("Stack is empty\n");
        return;}
    printf("Current stack:\n");
    for(int i=top;i>=0;i--)
        printf("%d\n", stack[i]);}
int main() {
    printf("Santhosh R\n");
    int n, data; scanf("%d", &n); 
    for(int i=0;i<n;i++){
        scanf("%d", &data);
        storeData(data); }
    displayStack();
    restoreData();
    restoreData();
    displayStack();
    return 0;}
