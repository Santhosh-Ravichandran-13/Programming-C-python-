/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a is greater");
        c=a;
    }else if(a<b){
        printf("b is greater");
        c=b;
    }else{
        printf("both are equal");
        c=a;
    }
    printf("\n %d",c);
    return 0;
}
