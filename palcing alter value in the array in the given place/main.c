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
   printf("The size of the array is :");
   scanf("%d",&n);
   int arr[n],i;
   int p,s;
   printf("The position of the value is :");
   scanf("%d",&p);
   printf("The value to be placed :");
   scanf("%d",&s);
   printf("The given array is:\n");
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(i==p){
     arr[i]=s;
    }
   }
   
   printf("The corrected array is ");
   for(i=0;i<n;i++){
    printf("\n%d",arr[i]);
   }
    return 0;
}