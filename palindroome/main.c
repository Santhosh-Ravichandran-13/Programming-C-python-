/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
   int n,s=0,d,c=0;
   printf("Enter the element:");
   scanf("%d",&n);
   int n1=n;
   int n2=n;
   while(n1!=0){
       c++;
       n1/=10;
   }
   while(n2!=0){
       d=n2%10;
       s+=d*pow(10,c-1);
       n2/=10;
       c--;
   }
   if(n==s){
       printf("Palindrome");
   }
   else{
       printf("NOT palindrome");
   }
    return 0;
}
