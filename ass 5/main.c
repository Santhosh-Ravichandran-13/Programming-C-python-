#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char dir[50];
    struct node *next;};
struct node *head=NULL;
void add(char d[]){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->dir,d);
    newnode->next=head;
    head=newnode;}
void display(){
    struct node *temp=head;
    printf("\nVisited Directories:\n");
    while(temp){
        printf("-> %s\n",temp->dir);
        temp=temp->next;}}
int main(){
    printf("Santhosh R\n");
    int n, i;
    char name[50];
    printf("Enter number of directories: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter directory: ");
        scanf("%s", name);
        add(name); }
    display();
    return 0;}
