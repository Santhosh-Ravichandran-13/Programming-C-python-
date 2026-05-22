#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char c) { stack[++top] = c;}
char pop() {
    if(top == -1) return '\0';
    return stack[top--];}
int isMatching(char open, char close) {
    if(open == '(' && close == ')') return 1;
    if(open == '{' && close == '}') return 1;
    if(open == '[' && close == ']') return 1;
    return 0;}
int main() {
    printf("Santhosh R\n");
    char str[MAX]; int balanced = 1;
    printf("Enter expression: "); scanf("%s", str);
    for(int i=0; i<strlen(str); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[') push(ch);
        else if(ch == ')' || ch == '}' || ch == ']') {
            char open = pop();
            if(!isMatching(open, ch)) {
                balanced = 0;
                break;}}}
    if(top != -1) balanced = 0;
    if(balanced) printf("Expression is balanced\n");
    else printf("Expression is not balanced\n");
    return 0;}
