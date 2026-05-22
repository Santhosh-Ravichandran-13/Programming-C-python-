/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("The given input is ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            s++;
        }
    }
    if(s==2){
        printf("prime number ");
    }
    else{
        printf("Not prime number");
    }
    return 0;
}
