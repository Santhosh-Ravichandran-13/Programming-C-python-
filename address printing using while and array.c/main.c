/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,arr[n],a=0;
    printf("The size of the array is ");
    scanf("%d",&n);
    printf("The elements of the array is ");
    while(a!=n+1){
        scanf("%d",&arr[a]);
        printf("\n adress of the %d ----->%d",arr[a],&arr[a]);
        a++;
    }
    return 0;
}
