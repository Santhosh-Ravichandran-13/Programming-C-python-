/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int **ptr1;
    ptr1=&ptr;
    printf("%i--->%i ,%i---->%i  ",*ptr,&ptr,**ptr1,&ptr1);
    return 0;
}
