/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,l;
    int s=0;
    scanf("%d",&n);
    int a=0;
    while(n!=0){
        l=n%10;
        if(l!=0)
        s=s+pow(2,a);
        n=n/10;
        a++;
    }
   printf("%d",s);
    return 0;
}