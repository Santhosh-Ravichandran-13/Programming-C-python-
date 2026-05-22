/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   printf("Printing the combination of the 1,2 and 3 numbers:\n");
   for(int i=1;i<=3;i++){
       for(int j=1;j<=3;j++){
           printf("[%d,%d]",i,j);
       }
       printf("\n");
   }

    return 0;
}