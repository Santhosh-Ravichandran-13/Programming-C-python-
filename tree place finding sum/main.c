/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,j;
   printf("The given input is :");
   scanf("%d",&n);
   printf("The place of the trees  is :");
   scanf("%d",&j);
    if(j%n==0||j%n==1 ||j<=n||(j/n)==n-1){
     printf("The Mango tree.");
   }
   else{
    printf("The coconut tree.");
   }
    return 0;
}
