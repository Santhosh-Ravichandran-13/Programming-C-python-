/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=1;
    printf("The given input is ");
    scanf("%d",&n);
    st:
    if(n>0){
        sum=sum*n;
        n--;
        goto st;
    }
    printf("The Factorial of ",sum);
    return 0;
}
