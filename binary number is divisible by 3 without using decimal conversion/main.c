/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char b[20];
    int i,ec=0,oc=0;
    scanf("%s",b);
    int len=strlen(b);
    for(i=len-1;i>=0;i--){
        if(b[i]=='1'){
            if((len-i)%2==0){
                ec++;
            }else{
               oc++; 
            }
        }
    }
    if(abs(ec-oc)%3==0){
        printf("Yes");
    }
    else{
        printf("NO");
    }
    return 0;
}
