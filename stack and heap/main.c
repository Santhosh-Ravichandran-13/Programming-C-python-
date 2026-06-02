/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include<stdlib.h>
int main()
{
    int i;
    int s[6]={10,90,30,66,20,80};
    printf("Stack sorting :");
    for(i=0;i<6;i++){
     printf("\n%d",s[i]);
    }
    printf("\nThe Heap sorting:");
    int x=5;
    int *p;
    p=(int*)malloc(x*sizeof(int));
    for(i=0;i<x;i++){
    scanf("%d",p+i);
    }
    for(i=0;i<x;i++){
     printf("\n%d",*p+i);
    }

    return 0;
}
