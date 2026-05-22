/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int start_motors(int a,int b){
 if(a<35 && b>20){
  for(int i=b;b>20;b--){
   a++;
  }
  
 
 }
 printf("%d",a);
}
int main()
{
    int a,b;
    printf("The upper tank level is :");
    scanf("%d",&a);
    printf("The lower tank level is :");
    scanf("%d",&b);
   start_motors(a,b);
    return 0;
}
