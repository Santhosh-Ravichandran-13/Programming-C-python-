/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int a;
    printf("The number is :");
    scanf("%d",&a);
    while(a>0){
        a=a-2;
    }
    if(a==0){
        printf("EVEN NUMBER");
    }
    else{
        printf("ODD NUMBER");
    }
    return 0;
}
