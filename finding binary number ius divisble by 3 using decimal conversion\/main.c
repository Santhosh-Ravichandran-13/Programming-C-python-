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
   int n;
   scanf("%d",&n);
   int s=0;
   int a=0;
   while(n!=0){
       int l=n%10;
       if(l!=0){
           s=s+pow(2,a);
       }
    n/=10;
    a++;
   }
   if(s%3==0){
       printf("Yes! it is divisible by 3.");
   }else{
       printf("NO! it is not divisible by 3.");
   }
   
    return 0;
}
