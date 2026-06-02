/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n,s,f,l;
    printf("The given input is");
    scanf("%d",&n);
    f=n/10;
    l=n%10;
    s=f+l;
    printf("The sum of the digits is %d",s);
    return 0;
}
