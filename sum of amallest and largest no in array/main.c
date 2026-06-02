/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i;
   printf("The size of the array is:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter Array elements :");
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   int templ=arr[0];
   int temps=arr[0];
   for(i=1;i<n;i++){
       if(arr[i]<temps){
           temps=arr[i];
       }
   }
   for(i=1;i<n;i++){
       if(arr[i]>templ){
           templ=arr[i];
       }
   }
   int sum=templ+temps;
   printf("The sum of the largest and smallest no in the array is:%d",sum);
   
    return 0;
}