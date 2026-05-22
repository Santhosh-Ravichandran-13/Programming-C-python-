/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int add(int a,int b){
    int c;
    a=100;b=100;
    printf("\n Sub program logic of the eelemnts is%d %d = %d",a,b,a+b);
}
int main()
{
   int a=5,b=10,c,x;
   c=a+b;
   printf("\n main program are %d %d =%",a,b,c);
   x=add(a,b);
   printf("\n the add is %d",x);
    return 0;
}
