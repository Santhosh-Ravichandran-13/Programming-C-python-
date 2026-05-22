/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,t;
    scanf("%d %d %d",&r,&c,&t);
    if(t<=0 || t>(r*c)){
        printf("Invalid");
    }
    else if((t%r==0||t<r||t%r==1)){
        printf("It is Mango tree");
    }else{
        printf("Not a Mango Tree");
    }
    return 0;
}
