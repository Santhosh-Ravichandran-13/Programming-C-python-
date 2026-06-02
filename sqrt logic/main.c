/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a=sqrt(n);

    if(a==floor(a)){
        printf("PN");
    }
    else{
        printf("NPN");
    }

    return 0;
}