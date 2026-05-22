/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char s[50];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='0'&&s[i]<='9')||s[i]=='.'){
            printf("%c",s[i]);
        }
    }
    return 0;
}