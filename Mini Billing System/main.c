/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("The price of the I item is:");
    scanf("%d",&a);
    printf("The price of the II item is:");
    scanf("%d",&b);
    printf("The price of the III item is:");
    scanf("%d",&c);
    printf("The price of the IV item is:");
    scanf("%d",&d);
    printf("The price of the V item is:");
    scanf("%d",&e);
    if(a<0||b<0||c<0||d<0||e<0){
        printf("Error");
    }else{
    int total=a+b+c+d+e;
    printf("\nThe total amount of the items:%d",total);
    float dis;
    float t;
    if(total<500){
        printf("\nAmount less than 500 , No discount: ");
        printf("\nThe total amount is :%d",total);
    }
    if(total>=500&& total<=1000){
        dis=(total*0.05);
        t=total-dis;
        printf("\nThe discounted amount is:%f",dis);
        printf("\nThe total amount after discount is:%f",t);
    }else if(total>1000){
        dis=(total*0.1);
        t=total-dis;
        printf("\nThe discounted amount is:%f",dis);
        printf("\nThe total amount after discount is:%f",t);
    }
    else{
        
    }
    float gst;
    gst=t*(1.05);
 
    printf("\nThe Total amount of the items after GST is %f",gst);
    }
    return 0;
}
