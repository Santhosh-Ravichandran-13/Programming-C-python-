/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,c;
  printf("The given value is :");
  scanf("%d",&n);
  int *ptr;
  ptr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
      if(*ptr%i==0){
          c++;
      }
      if(c==2){
          printf("Prime");
          printf("%d",*ptr);
      }
      else{
          
      }
  }
  
   

    return 0;
}
