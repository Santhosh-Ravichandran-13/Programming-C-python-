/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    char n;
    printf("Give the age of the person:");
    scanf("%d",&age);
    printf("Give nationality of the person:");
    scanf(" %c",&n);
    if(age >= 18 && n=='i'){
        printf("you are eligible ");
        
    }
        
     else if(age <18 && n=='i'){
        printf("you are not  eligible ");
     }
        else if(n=='a'|n =='u'|n=='p'){
        printf("you are from different country and not eligiblle ");
    }
    else{
        printf("Give valid input");
    }
    

    return 0;
    
}
