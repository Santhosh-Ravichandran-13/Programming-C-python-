/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ while(1){
    int i;
    printf("\nStop....>");
    for(i=10;i>=1;i--){
        
        printf("\nRed Signal :%d",i);
    }
   printf("\nWait.....>");
    for(i=3;i>=1;i--){
        
        printf("\nYellow Signal:%d",i);
    }
     
    for(i=7;i>=1;i--){
       
        printf("\nGreen Signal:%d",i);
    }
    printf("\nGo.....>");
    return 0;
}
}