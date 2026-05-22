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
    printf("Enter the size:");
    scanf("%d",&n);
    int f=-1;
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the Search element:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("Element found!\n");
            f=i;
            printf("Element found at %d",f);
            break;
        }
    }
    if(f==-1){
        printf("Element not found!");
    }
    return 0;
}