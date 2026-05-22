/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    int arr[10],i,s=0;

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
       if(arr[i]==-1){
            break;
        }
            s=s+arr[i];
    }
    printf("the output is %d",s);

    return 0;
}
