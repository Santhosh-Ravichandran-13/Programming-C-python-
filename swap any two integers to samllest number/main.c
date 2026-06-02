/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	char s[20];
	scanf("%s",s);
	int i;
	for(i=0;s[i]!='\0';i++) {
	     if(s[i]>s[i+1]){
	         printf("YES");
	         return 0;
	     }
		}
		
		  printf("NO");
		  return 0;
}
