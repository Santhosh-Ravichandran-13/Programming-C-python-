/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct St{
    int reg;
    char name[50];
    float cgpa;
    struct St*next;
};
struct St*head=NULL;

void Ins_be(int r,char* s,float c){
    struct  St*nn=(struct St*)malloc(sizeof(struct St));
    nn->reg=r;
    strcpy(nn->name,s);
    nn->cgpa=c;
    nn->next=head;
    head=nn;
    if(head==NULL){
        head=nn;
    }
    
}
void dis(){
    struct St*temp=head;
    while(temp!=NULL){
        printf("\n%d->%s->%f",temp->reg,temp->name,temp->cgpa);
        temp=temp->next;
    }
}
int main()
{
     Ins_be(101,"santhosh",8.0);
     Ins_be(102,"Asath",10.0);
     Ins_be(103,"san",6.7);
     Ins_be(104,"sudalai",8.0);
     dis();
   

    return 0;
}