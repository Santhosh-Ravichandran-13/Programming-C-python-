/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i,n;
	printf("the input is ");
	scanf("%d",&n);
	for(i=0;i<=n; i++) {
		printf("%d",i);
		if(i<n) {
			printf(",");
		} 
}
	return 0;
}
