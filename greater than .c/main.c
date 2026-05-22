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
   printf("the number given is ");
   scanf("%d",&num);
   if(num>=10 && num<=20){
       printf("Greater than 10");
   }
   else if(num>=20 && num<=30){
       printf("Greater than 10");
       printf("\n Greater than 20");
   }
   else if(num>=30 && num<=40){
       printf("Greater than 10");
       printf("\n Greater than 20");
       printf("\n Greater than 30");
   }
   else if(num>=40 && num<=50){
       printf("Greater than 10");
       printf("\n Greater than 20");
       printf(" \n Greater than 30");
       printf("\n Greater than 40");
   }
   else{
       printf("Give valid input");
   }
    return 0;
}
