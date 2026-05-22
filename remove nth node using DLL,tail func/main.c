/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node*next;
	struct node*prev;
};
struct node*head=NULL;
struct node*tail=NULL;
void insert_end(int x) {
	struct node*nn=(struct  node*)malloc(sizeof(struct node));
	nn->data=x;
	nn->next=NULL;
	if(head==NULL) {
		tail=head=nn;
	}
	tail->next=nn;
	nn->prev=tail;
	tail=nn;
}
void delete_pos(int p) {
	if(p<1) {
		printf("error.");
		return;
	}
	struct node*temp=head;
	int i=0;
	while(i<p-1&&temp!=NULL) {
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}
void dis() {
	struct node*temp=head;
	while(temp!=NULL) {
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
int main()
{	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	int i,s;
	printf("enter the list:");
	for(i=0; i<size; i++) {
		scanf("%d",&s);
		insert_end(s);
	}
	dis();
	int pos;
	printf("\nEnter the position:");
	scanf("\n%d",&pos);
	delete_pos(pos);
	printf("after the deletion :");
	dis();
	return 0;
}
