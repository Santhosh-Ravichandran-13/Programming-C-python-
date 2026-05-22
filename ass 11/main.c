#include <stdio.h>
int stack[20];
int top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int main(){
    printf("Santhosh R\n");
    int n,i;
    printf("Enter number of steps: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        push(i);
    printf("Backtracking path:\n");
    while(top!=-1)
        printf("%d ",pop());
}
