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
   char b[50];
   int i;
   int flag=0;
   scanf("%s",b);
   int len=strlen(b);
   for(i=len;i>=0;i--){
       if(b[i]=='1'){
           printf("%d",len-i);
           flag=1;
           break;
       }
   }
   if(!flag){
       printf("-1");
   }
    return 0;
}
