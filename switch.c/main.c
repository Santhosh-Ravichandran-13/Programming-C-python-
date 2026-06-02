/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:printf("pasta");
        break;
        case 2:printf("noodles");
        break;
        case 3:printf("dosa");
        break;
        case 4:printf("idly");
        break;
        default:printf("give input ");
        break;
    }

    return 0;
}