/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,n1,i,j;
	printf("The size of the matrix A is :");
	scanf("%d",&n);
	printf("The size of the matrix B is :");
	scanf("%d",&n1);
	if(n!=n1) {
		printf("The Size of the matrix doenot match,so addition and suntraction cant be done.");
	} else {
		int a[n][n],b[n1][n1],s[n][n],su[n][n];
		printf("The elemnts of the matrix A is:\n");
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				scanf("%d",&a[i][j]);
			}
		}
		printf("The elemnts of the matrix B is:\n");
		for(i=0; i<n1; i++) {
			for(j=0; j<n; j++) {
				scanf("%d",&b[i][j]);
			}
		}
		printf("The elements in the format of matrix A :%dx%d\n",n,n);
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("The elements in the format of matrix B :%dx%d\n",n,n);
		for(i=0; i<n1; i++) {
			for(j=0; j<n; j++) {
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				s[i][j]=a[i][j]+b[i][j];

			}
		}
		printf("The elements in the format of sum matrix S :%dx%d\n",n,n);
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				printf("%d ",s[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				su[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("The elements in the format of sub matrix S :%dx%d\n",n,n);
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				printf("%d ",su[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
