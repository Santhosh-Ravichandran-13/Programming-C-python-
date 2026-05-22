/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int details(int a,int b,int c,int d){

 printf("Student details %d",d);
 printf("\nThe Pincode is :%d",a);
 printf("\nThe age is :%d",b);
 printf("\nThe roll no is:%d\n",c);
}

int main()
{
    int p,a,r,n,i;
    printf("The size of the class:");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
    printf("The details of the students:");
    scanf("%d %d %d",&p,&a,&r);
    arr[i]=details(p,a,r,i);
    }
    return 0;
}