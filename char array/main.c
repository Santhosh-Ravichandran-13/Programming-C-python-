/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{ printf("char array using string formulex\n");
   char s[100];
   scanf("%s",&s);
   int y=strlen(s);
   printf("%d",y);
   printf("\n%s\n",s);
   printf("\nchar array using character formulex\n");
   char sr;
   scanf("%s",&sr);
   printf("%c\n",sr);
   printf("Char array using iteration and char formulex\n");
   char s1[10];
   scanf("%s",&s1);
   int d=strlen(s1);
   int i;
   for(i=0;i<d;i++){
    printf("%c",s1[i]);
   }
    return 0;
}