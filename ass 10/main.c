#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char c) {
    if(top < MAX-1)
        stack[++top] = c;
}
char pop() {
    if(top >= 0)
        return stack[top--];
    return '\0';
}
int main() {
    printf("Santhosh R\n");
    char str[MAX];
    int i;
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0;
    for(i = 0; str[i] != '\0'; i++)
        push(str[i]);
    printf("Reversed string: ");
    while(top != -1)
        printf("%c", pop());
    printf("\n");
    return 0;
}
