/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[7];
    scanf("%s",&s);
    int v=0,i;
    for(i=0;i<7;i++){
     if(s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='a'||s[i]=='i'){
      v++;
     }
     else{
      
     }
    }
    printf("%d",v);
    return 0;
}
