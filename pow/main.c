/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int po(int a,int b){
    int a1=1,s=1;
    while(a1!=b+1){
        s=s*a;
        a1++;
    }
    return s;
}


int main()
{
   int a,n=1;
   printf("The Given input is ");
   scanf("%d",&a);
   while(n!=a+1){
       int x=po(n,n);
       n++;
       printf("%d ",x);
   }

    return 0;
}
