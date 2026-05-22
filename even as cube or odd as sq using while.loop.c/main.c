/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a=1;
    printf("The Given input is ");
    scanf("%d",&n);
    while(a!=n+1){
        if(a%2==0){
            printf("%d\t ",a*a*a);
          
        }
        else{
            printf("%d\t",a*a);
            
        }
        a++;
    }

    return 0;
}