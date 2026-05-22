/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,nf,nt,no,n1,n2,n3;
	printf("the input is ");
	scanf("%d",&n);
    nf=n/500;
    n1=n%500;
    nt=n1/200;
    n2=n1%200;
    n3=n2/100;
    int s=nf+nt+n3;
    printf("%d",s);
	return 0;
}
