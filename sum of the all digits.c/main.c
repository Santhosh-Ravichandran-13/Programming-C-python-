/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,s=0,l;
   printf("The given input is ");
   scanf("%d",&n);
   while(n>0){
       l=n%10;
       s=s+l;
       n=n/10;
   }
   int n1=s,l1,s2=0;
   if(n1>=10){
     while(n1>0){
      l1=n1%10;
      s2=s2+l1;
      n1=n1/10;
     }
      printf("The sum of the all digits is %d",s2);
   }
   else{
       printf("The sum of the all digits is %d",s); 
   }
 
    return 0;
}
