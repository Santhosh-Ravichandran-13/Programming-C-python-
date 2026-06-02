/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void add(){
    int a,b;
    printf("The Given i/p is :");
    scanf("%d %d",&a,&b);
    printf("The sum of the values is %d",a+b);
    add();
}
int main()
{
    
   add();
    return 0;
}
