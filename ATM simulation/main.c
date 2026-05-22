/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int d,w,b=1000;
	char op;

	printf("Enter the Option:");
	scanf("%c",&op);
	switch(op)
	{
	case 'D':
	printf("Deposit Amount is:");
		scanf("%d",&d);
		b=b+d;
		printf("The new balance is:%d",b);
		break;
	case 'W':
	printf("Withdrawal amount is:");
		    scanf("%d",&w);
		if(w<=b) {
			b=b-w;
			printf("The new balance is:%d",b);
			break;
		}
		else {
			printf("The Amount is insufficient.");
		}
	case 'B':
		printf("The balance is %d",b);
		break;
		case 'E':
		printf("Exit the program:");
		return 0;
	default :
		printf("Give valid input");
        break;

	}
	return 0;
}
