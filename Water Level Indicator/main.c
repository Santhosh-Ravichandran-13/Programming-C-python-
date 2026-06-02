/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int level;
    printf("The Water Level of the Tank is:");
    scanf("%d",&level);
    if(level>=0 && level<=30){
        printf("LOW LEVEL");
        printf("\nAlert!Fill the tank.");
    }
    else if(level>=30 && level<=70){
        printf("MEDIUM LEVEL");
    }
    else if(level>=70 && level<100){
        printf("HIGH LEVEL");
    }
    else if(level<0 ||level>100){
        printf("Error");
    }else{
        
    }
    return 0;
}
