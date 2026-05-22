/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s",s);
    int i,c=0;
    char a=s[0];
    for(i=1;s[i]!='\0';i++){
        if(s[i]>a){
            c++;
        }
    }
   printf("%d",c);
    return 0;
}
