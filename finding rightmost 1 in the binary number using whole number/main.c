/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int c=0;
    int flag=0;
    while(num!=0){
        int d=num%10;
        c++;
        if(d==1){
            printf("%d",c);
            flag=1;
            break;
        }
        num/=10;
    }
   if(!flag){
       printf("-1");
   }
    return 0;
}
