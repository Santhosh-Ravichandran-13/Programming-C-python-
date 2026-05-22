/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int  main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int ar;
    int flag=0;
    scanf("%d",&ar);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        
        if(a[i]==ar){
            printf("True");
            return 0;
        }else{
            flag=1;
        }
    }
    if(flag==1){
        printf("False"); 
    }
}
