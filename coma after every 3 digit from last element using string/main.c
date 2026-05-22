/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
	char s[20];
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0; i<len; i++) {
		printf("%c",s[i]);
		if(i==len-1) {
			return 0;

		}
		if((len-i)%3==1) {
			printf(",");
		}
	}
	return 0;
}

