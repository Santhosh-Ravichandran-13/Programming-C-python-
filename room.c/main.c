/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num,mon,price=1000;
    printf("How many rooms booking?");
    scanf("%d",&num);
    printf("Which month are you looking?");
    scanf("%d",&mon);
    if(mon>12|mon<=0){
        printf("Give valid input");
    }else{
    if(mon==1|mon==11|mon==12|mon==4){
        printf("the room price is 1300 rupees ");
        price=num*(1300);
        printf("\nthe total price is %d",price);
    }else{
        printf("the room price is 1000 rupees");
        price=num*price;
        printf("\nthe total price is %d",price);
    }
}
    return 0;
}