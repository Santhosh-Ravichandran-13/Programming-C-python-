#include <stdio.h>
#include <string.h>
char stack[100][50];
int top = -1;
int main() {
    printf("Santhosh R\n");
    int n;
    char action[50];
    scanf("%d", &n);
    getchar(); 
    for(int i=0;i<n;i++){
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;
        strcpy(stack[++top], action);
        printf("Action '%s' performed\n", action);
    }
    printf("Current actions in stack:\n");
    for(int i=top;i>=0;i--) printf("%s\n", stack[i]);
    if(top>=0) printf("Undo action: '%s'\n", stack[top--]);
    if(top>=0) printf("Undo action: '%s'\n", stack[top--]);
    printf("Current actions in stack:\n");
    for(int i=top;i>=0;i--) printf("%s\n", stack[i]);
    return 0;
}
