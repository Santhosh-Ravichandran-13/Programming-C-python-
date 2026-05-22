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
	while(1) {
		char a[50],a1[50];
		printf("\nEnter the string:");
		scanf("%s",a);
		int y=strlen(a);
		int i,j;
		int s=0;
		for(i=0; i<y; i++) {
			a1[i]=a[y-i-1];
			printf("%c",a1[i]);
			if(a[i]==a1[i]) {
				s++;
			}
		}

		if(s==y) {
			printf("\nPalindrome");
		}
		else {
			printf("\nNot Palindrome");
		}
	}
	return 0;
}