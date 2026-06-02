/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,e,s=0;
    int arr[n];
    printf("The Size of the array is :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
     printf("The Exclusion value is :");
    scanf("%d",&e);
    for(i=0;i<n;i++){
     if(arr[i]!=e){
      s=s+arr[i];
     }
     else{
      
     }
    }
    printf("The sum of the remaining is :%d",s);
    return 0;
}
