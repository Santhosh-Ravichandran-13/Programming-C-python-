/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int i,j,arr[n],s;
    printf("size of the array is =");
    scanf("%d",&n);
    printf("The elements of the array is ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    s=arr[0];
    for(i=0;i<n;i++){
        if(s>arr[i]){
            s=s;
        }
        else{
            s=arr[i];
        }
    }
    printf("The greatest number is %d",s);

    return 0;
}