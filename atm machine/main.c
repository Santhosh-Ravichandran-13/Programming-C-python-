/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int b;
	scanf("%d",&b);
	int op;
	scanf("%d",&op);
	while(1) {
		switch(op) {
		case 1:
			int d;
			scanf("%d",&d);
			if(d<0) {
				printf("Invalid desposit");
				break;
			}
			b=b+d;
			printf("Balance is:%d\n",b);
			break;
		case 2:
			int w;
			scanf("%d",&w);
			if(w>b ||b<0) {
				printf("Insufficient balance!\n");
				break;
			}
			b=b-w;
			printf("The Balance is:%d\n",b);
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("Invalid option.\n");

		}
	}

	return 0;
}
