/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a=1,s=1;
    printf("Given input is ");
    scanf("%d",&n);
    while(a<=n){
        
        s=a*a;
       a++;
        printf("%d",s);
        if(a<=n){
            printf(",");
        }
    }

    return 0;
}
