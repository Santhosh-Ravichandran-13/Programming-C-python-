/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add(){
    int a,b;
    printf("The given i/p is:");
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{
    printf("the sum of the values is %d",add());

    return 0;
}
