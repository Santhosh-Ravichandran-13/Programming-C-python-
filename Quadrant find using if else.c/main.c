/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("The input is ");
    scanf("\n %d %d",&a,&b);
    if(a>0 && b>0){
        printf("Point lies in I quardant");
    }
    else if(a<0 && b>0){
        printf("Point lies in II quardant");
    }
    else if(a<0 && b<0){
        printf("Point lies in III quardant");
    }
    else if(a>0 && b<0){
        printf("Point lies in IV quardant");
    }
    else if(a==0 && b==0){
        printf("Point lies in origin");
    }
    else if(b==0)
    {
        if(a<0){
            printf("lies in -x axis");
        }else{
            printf("leis in +x axis");
        }
    }
    else if(a==0){
        if(b<0){
            printf("lies in -y axis ");
        }
        else{
            printf("lies in +y axis");
        }
    }
    else{
        printf("Give valid input ");
    }
    return 0;
}