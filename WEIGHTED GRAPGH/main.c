/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[4][4]={0};
     int e,v,w;
     printf("Enter the edges:\n");
     for(int i=0;i<4;i++){
         scanf("%d %d %d",&e,&v,&w);
         arr[e][v]=w;
         arr[v][e]=w;
         }
   printf("The weighted gragph :\n");
   for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
      
    return 0;
}
