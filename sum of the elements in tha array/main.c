/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,a=1,arr[n],s=0;
   printf("The Sizeof the array:");
   scanf("%d",&n);
   printf("The elements of the array: \n ");
   while(a!=n+1){
       scanf("%d",&arr[a]);
       s=s+arr[a];
       a++;
   }
   printf("The Sum of the total elements is %d",s);

    return 0;
}
