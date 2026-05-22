/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int days,fine=0;
    printf("The Overdue days is:");
    scanf("%d",&days);
    if(days<0){
        printf("Error");
    }
    else if(days>=1 && days<=5){
        fine=days*2;
        printf("The fine amount is Rs.%d",fine);
    }
    else if(days>=6 && days<=10){
        fine=days*5;
        printf("The fine amount is Rs.%d",fine);
       
    }else if(days>10 && days<30){
        fine=days*10;
        printf("The fine amount is Rs.%d",fine);
    }else if(days >=30){
        printf("Membership Cancelled");
        
    }
    
    return 0;
}
