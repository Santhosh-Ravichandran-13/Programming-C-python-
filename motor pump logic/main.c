/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int ul,ll;
    while(1){
    printf("\n The Input of the upper level tank is :");
    scanf("%d",&ul);
    printf("\n The Input of the Lower level tank is :");
     scanf("%d",&ll);
   if(ll<20){
    printf("Invalid input ....");
   
   }
   else if(ul>=95){
     printf("\n Overflow  ....");
    }
    
    if((ul>0&&ul<95) && ll>20){
     printf("\n start motor.....");
     for(int i=ll;i>0;i--){
      ul++;
      ll--;
      if(ll==20||ul==95){
       printf("\n Stop motor....");
       break;
      }
     }
     }
     printf("\n The value in the upper level tank : %d",ul);
    }

    return 0;
}
