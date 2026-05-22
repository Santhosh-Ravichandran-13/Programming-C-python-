#include <stdio.h>
int queue[10];
int front=-1,rear=-1;
void addTask(int x){
    if(front==-1) front=0;
    queue[++rear]=x;}
void Assecute(){
    if(front>rear)
        printf("No tasks\n");
    else
        printf("Task %d Assecuted\n",queue[front++]);}
int main(){
    printf("Santhosh R\n");
    int ch,x;
    while(1){
        printf("\n1.Add Task\n2.Execute\n3.Assit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter task id: ");
            scanf("%d",&x);
            addTask(x);}
        else if(ch==2)
            Assecute();
        else
            break;
}}
