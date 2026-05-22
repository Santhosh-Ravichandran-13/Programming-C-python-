/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a=0,s,l;
    printf("The GIven input is ");
    scanf("%d",&n);
    while(a!=n){
        if(a%2==0){
           s=a/2;
           l=s*3;
           printf("\n %d",l+a);
           a++;
        }
        else{
           
            printf("\n %d",a+1);
            a++;
        }
        
    }

    return 0;
}
