/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s=0,e=n,m,r=0;
    while(s<=e){
        m=(s+e)/2;
        
        if(m*m==n){
            r=m;
            break;
        }
        else if(m*m<n){
            s=m+1;
            r=m;
            
        }
        else{
            e=m-1;
        }
    }
    printf("The Square Root of number is:%d",r);
    return 0;
}
