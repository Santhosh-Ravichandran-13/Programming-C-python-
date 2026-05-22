/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
float main()
{
    int a,b;
    float x;
    printf("Give the integer value= ");
    scanf("%d %d",&a,&b);
    printf("Give the float value= ");
    scanf("%f",&x);
    int c=pow(a,b);
    printf("\n %d",c);
    printf("\n %f",floor(x));
    printf("\n %f",ceil(x));

    return 0;
}
