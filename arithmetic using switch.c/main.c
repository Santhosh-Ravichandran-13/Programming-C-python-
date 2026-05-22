/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("the first number is");
    scanf("%d",&a);
    printf("the second number is");
    scanf("%d",&b);
    char op;
    printf("the operation is (+,-,/,*,%)\n");
    scanf(" %c",&op);
    switch(op){
        case '+':printf("the add is %d",a+b);break;
        case '-':printf("the sub is %d",a-b);break;
        case '*':printf("the mul is %d",a*b);break;
        case '/':printf("the div is %d",a/b);break;
        case '%':printf("the mod is %d",a%b);break;
        default:printf("give valid operator");break;
    }
    printf("\n the size of the operator is %d",sizeof(op));
    return 0;
}
