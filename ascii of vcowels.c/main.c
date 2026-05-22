/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
    char c;
    printf("character input is");
    scanf(" %c",&c);
if(c>=65){
    if(c=='A'|c=='E'|c=='I'|c=='O'|c=='U'){
        printf("the vowels");
    }
    else{
        printf("the consonants");
    }
    printf("%d",c);
}
else 
{
    if(c=='a'|c=='e'|c=='o'|c=='i'|c=='u')
    {
       printf("vowels"); 
    }
    else{
    printf("consonants");
}
printf("%d",c);
}

    return 0;
}
