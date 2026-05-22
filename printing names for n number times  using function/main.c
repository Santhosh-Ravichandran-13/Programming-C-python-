/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void na(int a){
   
    if(a!=0){
         printf("\n R.SANTHOSH");
       a--;
       na(a);
    }
}
int main()
{
    int a;
    
    printf("How many times:");
    scanf("%d",&a);
    na(a);
    return 0;
}
