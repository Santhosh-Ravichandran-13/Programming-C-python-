/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j;
	printf("The size of the elements:");
	scanf("%d",&n);
	int arr[n][n];
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i==j||i+j==n-1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
