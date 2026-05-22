/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=30;i++){
        int f=0;
        for(j=1;j<=30;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==2){
            printf("%d ",i);
        }
    }

    return 0;
}