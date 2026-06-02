/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    
    int l=0,h=n-1;
    int mid=(l+h)/2;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    while(l<=h){
        if(a[mid]==s){
            printf("TRUE");
            return 0;
        }
        else if(s<a[mid]){
            h=mid;
        }
        else{
            l=mid;
        }
    }

   printf("FALSE");
   return 0;
}
