#include <stdio.h>
#include<stdlib.h>

struct n {
	int data;
	struct n*next;
	struct n*prev;
};

struct n*head=NULL;
struct n*tail=NULL;

void ins_be(struct n**head,int x) {
	struct n*nn=(struct n*)malloc(sizeof(struct n));
	nn->data=x;
	if(*head==NULL) {
		tail=*head=nn;
		nn->next = nn;
		nn->prev = nn;
		return;
	}
	nn->next=*head;
	(*head)->prev=nn;
	(*head)=nn;
	nn->prev=tail;
	tail->next=nn;
}

void ins_end(struct n**head,int x) {
	struct n*nn=(struct n*)malloc(sizeof(struct n));
	nn->data=x;

	if(*head==NULL) {
		*head=tail=nn;
		nn->next = nn;
		nn->prev = nn;
		return;
	}

	tail->next=nn;
	nn->prev=tail;
	nn->next=*head;
	(*head)->prev=nn;
	tail = nn;
}

void add_dis(struct n*head) {
	struct n*temp=head;
	do {
		printf("\n(prev)%d-(present)%d-(next)%d",temp->prev,temp,temp->next);
		temp=temp->next;
	} while(temp!=head);
}

void dis(struct n*head) {
	if(head==NULL) {
		printf("List empty");
		return;
	}
	struct n*temp=head;
	do {
		printf("%d->",temp->data);
		temp=temp->next;
	} while(temp!=head);
	printf("NULL");
}

struct n* merge(struct n *l1, struct n *l2) {

	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;

	struct n *tail1 = l1->prev;
	struct n *tail2 = l2->prev;

	tail1->next = l2;
	l2->prev = tail1;

	tail2->next = l1;
	l1->prev = tail2;

	return l1;
}

int main()
{
	int s,n1,n2,i;
	printf("Enter the size of first list:");
	scanf("%d",&n1);
	printf("Enter the size of second list:");
	scanf("%d",&n2);

	struct n*l1=NULL;
	struct n*l2=NULL;
	printf("Elements in list 1:\n");
	for(i=0; i<n1; i++) {
		scanf("%d",&s);
		ins_end(&l1,s);
	}
	printf("Elements in list 2:\n");
	for(i=0; i<n2; i++) {
		scanf("%d",&s);
		ins_be(&l2,s);
	}

	l1=merge(l1,l2);
	printf("Merged List:\n");
	dis(l1);

	return 0;
}
