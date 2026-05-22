/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int age,dis;
    printf("The passenger Name is :");
    scanf("%s",&s1);
    printf("The passenger age is :");
    scanf("%d",&age);
     printf("The passenger travel distance  is :");
    scanf("%d",&dis);

    if(dis<0){
        printf("Invalid distance");
    }else{
    int cost=dis*3;
    if(age <5 ){
        printf("\nFree Ticket");
    }
    else if(age >60){
        cost=cost*(0.5);
        printf("\nThe discounted cost for elderly people is Rs:%d",cost);
    }else if(age >=5 && age<=60){
        printf("\nThe total cost is Rs:%d",cost);
    }else if(age<0){
        printf("Invalid age");
    }else{
        
    }
    }
    return 0;
}
