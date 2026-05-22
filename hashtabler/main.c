/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 10
int ht[SIZE];

void insert(int key){
    int index=key%SIZE;
    while(ht[index]!=-1){
        index=(index+1)%SIZE;
    }
    ht[index]=key;
}
void dis(){
    for(int i=0;i<SIZE;i++)
{
    printf("Index %d : value:%d\n",i,ht[i]);
}}
int main()
{
    for(int i=0;i<SIZE;i++){
        ht[i]=-1;
    }
insert(25);
insert(35);
insert(15);
dis();
    return 0;
}
