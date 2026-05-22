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
   char s[50];
   fgets(s,sizeof(s),stdin);
   char *token=strtok(s,"\n");
   while(token!=NULL){
       if(strcmp(token,"the")!=0){
           printf("%s",token);
       }
   }
    return 0;
}
