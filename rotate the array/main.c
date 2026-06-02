/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,a,i;
   scanf("%d %d",&n,&a);
   int arr[n];
   for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
   }
   for(i=n-a;i<n;i++){
           printf("%d",arr[i]);
     }
   for(i=0;i<a;i++){
       printf("%d",arr[i]);
   }  
    return 0;
}
