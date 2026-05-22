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
   char s[100];
   char c[100],b[100];
   int p=0,r=0;
   int i;
   scanf("%s",&s);
   int d=strlen(s);
   for(i=0;i<d;i++){
    if(s[i]>=65 && s[i]<=90 ){
     c[p]=s[i];
     p++;
    }
    else if(s[i]>=92 && s[i]<=122){
     b[r]=s[i];
     r++;
    }
   }
   printf("Op 1:");
    for(int i=0;i<p;i++){
     printf("\n %c",c[i]);
    }
    printf("\nOp 2:");
    for(int i=0;i<r;i++){
     printf("\n %c",b[i]);
    }
    return 0;
}
