#include<stdio.h>
int main(){
    int a=50;
    printf("original= %d\n",a);
    printf("pre increment = %d\n",++a);
    printf("post increment = %d\n",a++);
   // printf("pre decrement = %d\n",--a);
    printf("post decrement = %d\n",a--);
    printf("%d",a);
    
    return 0;
}