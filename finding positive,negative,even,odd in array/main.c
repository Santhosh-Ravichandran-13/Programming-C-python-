/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,e=0,neg=0,o=0,pos=0;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            neg++;
        }
       if(arr[i]%2==0){
            e++;
        }
       if(arr[i]%2==1){
            o++;
        }
        if(arr[i]>0){
            pos++;
        }
    }
    printf("The Positive in array:%d\n",pos);
    printf("The Negative in array:%d\n",neg);
    printf("The Even in array:%d\n",e);
    printf("The Odd in array:%d\n",o);
    return 0;
}
