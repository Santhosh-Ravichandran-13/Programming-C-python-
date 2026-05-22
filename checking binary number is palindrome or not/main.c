/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
   char b[20];
   scanf("%s",b);
   int y=strlen(b);
   int i,flag=0;
   for(i=0;i<y;i++){
       if(b[i]!=b[y-i-1]){
         printf("NO Palindrome");
         flag=1;
         break;
       }
       }
  if(!flag){
     printf("Palindrome"); 
  }
    
    return 0;
}
