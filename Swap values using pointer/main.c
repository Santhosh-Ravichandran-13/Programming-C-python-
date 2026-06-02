/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int swap(int *ptr1){
    int temp;
    temp=*ptr1;
    *ptr1=40;
    printf("Old value is %d",temp);
    return *ptr1;
}
int main()
{
   int a=20;
   int *ptr1;
   ptr1=&a;
   swap(ptr1);
   printf("\nNew value is %d",*ptr1);
    return 0;
}