/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
     int data;
     struct Node*next;
 };
 struct Node*head=NULL;
 struct Node*tail=NULL;
 
 void Insert_Begin(int d){
     struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
     nn->data=d;
     nn->next=head;
     head=nn;
    if(tail==NULL){
        tail=nn;
    }
 }
 void Insert_end(int d){
     struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
     nn->data=d;
     nn->next=NULL;
     if(head==NULL){
         head=tail=nn;
     }
     tail->next=nn;
     tail=nn;
 }
 
 void display(){
     struct Node*temp=head;
     while(temp->next!=NULL){
         printf("%d->",temp->data);
         temp=temp->next;
     }
     printf("%d",temp->data);
 }
 
 void Delete_begin(){
     struct Node*temp=head;
     head=head->next;
     free(temp);
 }

void Delete_end(){
    struct Node*temp=head;
    struct Node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}


int main()
{
    Insert_Begin(100);
    Insert_Begin(50);
    Insert_end(200);
    Insert_end(300);
    display();
    Insert_Begin(25);
    Insert_Begin(10);
     Insert_end(400);
    Insert_end(500);
     printf("\nafter Insert functions:");
    display();
    Delete_begin();
    Delete_end();
    printf("\nafter Delete functions:");
    display();
    return 0;
}