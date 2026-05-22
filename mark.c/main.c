/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>25|b>25|c>25|d>=25){
        printf("error");
    }
    else{
    int sum=a+b+c+d;
    if(sum>0 && sum<70){
        printf("d grade");
    }else if(sum>70 && sum<80){
        printf("c grade");
    }else if(sum>80 && sum<90){
        printf("b grade");
    }else{
        printf("a grade");
    }
}
    return 0;
}
