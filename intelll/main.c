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
   float j,s;
   printf("------------------\n");
   printf("| Y | X    | I    |\n");
    printf("-----------------\n");
   for(i=1;i<=6;i++){
       for(j=5.5;j<=12.5;j+=0.5){
           s=2+(i+(0.5*j));
           printf("| %d | %.2f  | %.2f  |\n",i,j,s);
       }
       printf("----------------------\n");
   }
    return 0;
}
