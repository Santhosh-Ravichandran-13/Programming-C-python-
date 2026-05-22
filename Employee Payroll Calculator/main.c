/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,t,op,ot;
   printf("The Working Hrs is:");
   scanf("%d",&n);
   if(n> 0&& n<=8){
     t=(n*100)*7;
     printf("The Total amount is:%d",t);
   }else if(n>8){
       t=(n*100)*7;
       ot=(n-8);
       op=t+(ot*200);
       printf("The Total amount with oveertime pay is :%d",op);
   }else if(n<0 ||n>24){
       printf("Give valid input");
   }else{
       
   }
    return 0;
}
