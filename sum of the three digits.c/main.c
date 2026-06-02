/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,s,l,a,n1,n2;
    printf("The Given input is ");
    scanf("%d",&n);
    
        l=n%10;
        n1=n/10;
        a=n1%10;
        n2=n1/10;
        s=l+a+n2;
    printf("%d",s);

    return 0;
}
