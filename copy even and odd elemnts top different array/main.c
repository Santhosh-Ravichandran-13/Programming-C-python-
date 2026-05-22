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
    printf("The Size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("The Elements of the array :");
    int e[n],o[n];
    int p=0,r=0;
    int i;
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
     if(arr[i]%2==0){
      e[r]=arr[i];
      r++;
     }
     else{
      o[p]=arr[i];
      p++;
     }
    }
    printf("\n The no of even is :%d",r);
    printf("\n The no of odd is :%d",p);
    printf("\n The even is ");
    
    for(int i=0;i<r;i++){
     printf("\n %d",e[i]);
    }
    printf("\n The odd is ");
    for(int i=0;i<p;i++){
     printf("\n %d",o[i]);
    }
    return 0;
}