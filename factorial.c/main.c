/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,sum=1;
    printf("The given input is ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("The Factorial of %d  is %d",n,sum);
    return 0;
}
