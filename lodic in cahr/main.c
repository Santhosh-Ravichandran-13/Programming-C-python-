/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
	int i;
	char min;
	char c[100];
	scanf(" %s",c);
	int y=strlen(c);
	min=c[0];
	for(i=1; i<y; i++) {
		if(c[i]<min) {
			min=c[i];
		}
		else {
			min=min;
		}
	}
	for(i=0; i<y; i++) {
		printf("%c",min);
	}
	return 0;
}