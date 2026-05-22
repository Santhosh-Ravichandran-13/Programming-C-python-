/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct  Node*next;
	struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;

void Ins_be(int d) {
	struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
	nn->data=d;
	nn->prev=NULL;
	nn->next=head;
	if(head==NULL) {
		head=tail=nn;
	}
	head->prev=nn;
	head=nn;
}

void Ins_end(int d) {
	struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
	nn->data=d;
	nn->next=NULL;
	nn->prev=NULL;
	if(head==NULL) {
		tail=head=nn;
	}
	nn->prev=tail;
	tail->next=nn;
	tail=nn;
}
void Ins_po(int d,int p) {
    if(p<1){
       printf("Position is invalid.");
       return;
   }
	struct Node*nn=(struct Node*)malloc(sizeof(struct  Node));
	nn->data=d;
	nn->next=NULL;
	nn->prev=NULL;
	int i=1;
	
	struct Node*temp=head;
	while(i<p-1 && temp->next!=NULL) {
		temp=temp->next;
		i++;
	}
	temp->next->prev=nn;
	nn->next=temp->next;
	temp->next=nn;
	nn->prev=temp;
}
void dis() {
	struct Node*temp=head;
	while(temp!=NULL) {
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
void rev_dis() {
	struct Node*temp=tail;
	while(temp!=NULL) {
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("NULL");
}
void Delete_be() {
	struct Node*temp=head;
	if(head==NULL) {
		printf("No List");
		return ;
	}
	else if(head->next==NULL) {
		head=tail=NULL;
		return;
	} else {
		head=head->next;
		head->prev=NULL;
		free(temp);
	}

}

void delete_end() {
	struct Node*temp;
	if(head==NULL) {
		printf("No List");
		return ;
	}
	if(head->next==NULL) {
		temp = head;
        head = tail = NULL;
        free(temp);
        return;  
	}
	temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	free(temp);
}

void Ins_mid(int d){
   struct Node*temp=head;
   int c=0;
   
   while(temp!=NULL){
      temp=temp->next; 
      c++;
   }
   int mid=(c/2)+1;
   Ins_po(d,mid);
   
}
void Delete_pos(int p){
   struct Node*temp=head;
   int i=1;
   while(i<p &&temp!=NULL){
       temp=temp->next;
       i++;
   }
   temp->next->prev=temp->prev;
   temp->prev->next=temp->next;
   free(temp);
}
void circular(){
    if (head == NULL)
        return;
    head->prev = tail;
    tail->next = head;
}
void disp(){
   	struct Node*temp=head;
	  do {
        printf("\n%d(prev)-%d(current)-%d(data)-%d(next)",temp->prev,temp,temp->data,temp->next);
        temp = temp->next;
    } while (temp != head);
}
int main()
{
	Ins_be(50);
	Ins_end(100);
	Ins_be(25);
	Ins_be(10);
	Ins_end(150);
	Ins_end(200);
	Ins_be(5);
	printf("The functions of Insert:\n");
	dis();
	printf("\nThe reverse Function:\n");
	rev_dis();
	printf("\nThe function after position Insert:");
		Ins_po(60,3);
		Ins_po(80,5);
		dis();
		Ins_mid(90);
		printf("\nMid:");
		dis();
	printf("\nThe functions of Delete:");
	Delete_be();
	delete_end();
	Delete_pos(3);
	Delete_pos(6);
	dis();
	printf("\nMake circular:");
	circular();
	disp();
	return 0;
}