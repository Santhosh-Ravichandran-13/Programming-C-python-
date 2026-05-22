/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num;
   int min=10;
   scanf("%d",&num);
   while(num!=0){
       int d=num%10;
         if(d>min){
             printf("NO");
             return 0;
         }
         min=d;
         num/=10;
   }
   printf("YES");
    return 0;
}
