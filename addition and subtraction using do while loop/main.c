/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a,b;
    char c='Y';
   do{
   printf("The elements a and b:");
   scanf("%d %d",&a,&b);
   printf("addition of the elements:%d",a+b);
   printf("\nmultiplication of the elements:%d",a*b);
   printf("\n if you want to continue (Y or N): .\n ");
   scanf("  %c",&c);
    } while(c=='Y'||c=='y');
    return 0;
}
