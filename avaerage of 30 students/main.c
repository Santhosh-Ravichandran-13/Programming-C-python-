/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float s=0;
    float c;
    printf("Enter the numbers:");
    for(int i=0;i<30;i++){
        scanf("%f",&c);
        s+=c;
    }
    printf("The average of the class is:%f",s/30);
    return 0;
}