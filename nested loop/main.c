/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j;
   int n;
   printf("The Size of the elements is :");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    for(j=1;j<=n;j++){
     printf("%d",j);
    }
    printf("\n");
   }

    return 0;
}