/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i,j;
   printf("The size of the matrix is :");
   scanf("%d",&n);
   int a[n][n];
   printf("The elemnts of the matrix is:\n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
    printf("The elements in the format of matrix :%dx%d\n",n,n);
     for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
    return 0;
}
