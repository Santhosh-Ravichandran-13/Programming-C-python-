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
    int arr[n];
    int i,s=0,c=0;
    printf("The Size of the array is ");
    scanf("%d",&n);
    printf("The elements of the array is =");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            s=s+arr[i];
            c++;
        }
        
    }
    float d=s/c;
    printf("The average of the even numbers is %f",d);

    return 0;
}
