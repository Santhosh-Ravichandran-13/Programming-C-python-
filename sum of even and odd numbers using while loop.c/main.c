/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n=0,s1=0,s2=0;
   printf("The given input is ");
   while(n!=-1){
   scanf("%d",&n);
   if(n%2==0){
       s1=s1+n;
   }
   else if(n==-1){
       break;
   }
   else{
       
       s2=s2+n;
   }
}
printf("The sum of the even numbers and odd numbers  is %d , %d",s1,s2);
    return 0;
}