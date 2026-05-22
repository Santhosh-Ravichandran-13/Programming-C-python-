/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int size,i,c=0;
   scanf("%d",&size);
   int arr[size];
   for(i=0;i<size;i++){
       scanf("%d",&arr[i]);
   }
   int v;
   scanf("%d",&v);
   for(i=0;i<size;i++){
       if(arr[i]==v)
           c++;
   }
 if(c==1)
   printf("yes");
  else
  printf("No");
    return 0;
}
