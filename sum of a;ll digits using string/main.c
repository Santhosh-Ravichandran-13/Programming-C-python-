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
    int sum=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]-'0';
        sum+=s[i];
    }
    printf("%d",sum);
    return 0;
}