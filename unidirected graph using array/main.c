/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int src,des;
   int arr[4][4]={0};
   printf("The Initial Array:\n");
   for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
    int e=3;
    printf("The edges:\n");
    for(int i=0;i<e;i++){
        scanf("%d %d",&src,&des);
        arr[src][des]=1;
        arr[des][src]=1;
    }
    printf("The Unidirected graph:\n");
    for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
    return 0;
}