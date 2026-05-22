/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct n{
    int data;
    struct n*next;
    struct n*prev;
};
struct n*head=NULL;
struct n*tail=NULL;

void ins_be(int x){
    struct n*nn=(struct n*)malloc(sizeof(struct n));
    nn->data=x;
    if(head==NULL){
        tail=head=nn;
    }
    nn->next=head;
    head->prev=nn;
    head=nn;
    nn->prev=tail;
    tail->next=nn;
}
void ins_end(int x){
    struct n*nn=(struct n*)malloc(sizeof(struct n));
    nn->data=x;
    if(head==NULL){
        head=tail=nn;
    }
    tail->next=nn;
    nn->prev=tail;
    tail=nn;
    nn->next=head;
    head->prev=tail;
}
void add_dis(){
    struct n*temp=head;
   do{
     printf("\n(prev)%d-(present)%d-(next)%d",temp->prev,temp,temp->next);
     temp=temp->next;
   }while(temp!=head);
   
}
void dis(){
    struct n*temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("NULL");
}
int main()
{
   int s;
   int i,n;
   printf("Enter the size:");
   scanf("%d",&n);
    printf("Enter the elements at begin:");
    for(i=0;i<n;i++){
       scanf("%d",&s);
       ins_be(s);
   }
   printf("Enter the elements at end:");
   for(i=0;i<n;i++){
       scanf("%d",&s);
       ins_end(s);
   }
  
   dis();
   add_dis();
    return 0;
}
