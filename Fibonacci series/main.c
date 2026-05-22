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
     int s1=0;
      int s2=1;
     scanf("%d",&n);
     if(n==1){
      printf("%d",s1);
     }
     else if(n==0){
     }
      else{
     printf("%d",s1);
     printf("\n%d",s2);
     for(i=0;i<=n-3;i++){
      int s=s1+s2;
      printf("\n%d",s);
      s1=s2;
      s2=s;
      
     }
}
    return 0;
}