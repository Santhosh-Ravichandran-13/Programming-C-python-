/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int add(int a,int b) {
	int sum=a+b;
	return sum;
}
int sub(int a,int b) {
	int s1=a-b;
	return s1;
}
int mul(int a,int b) {
	int ss=a*b;
	return ss;
}
int divi(int a,int b) {
	int d1=a/b;
	return d1;
}
int mod(int a,int b){
    int m1=a%b;
    return m1;
}
int pov(int a,int b){
    int a1=1,s=1;
    while(a1!=b+1){
        s=s*a;
        a1++;
    }
    return s;
}
int main()
{
	int a,b;
	printf("The given input is ");
	scanf("%d %d",&a,&b);
	printf("\n The sum of the elements:%d",add(a,b));
	printf("\n The subtraction  of the elements:%d",sub(a,b));
	printf("\n The multiplication of the elements:%d",mul(a,b));
	printf("\n The division of the elements:%d",divi(a,b));
	printf("\n The modulo of the elents:%d",mod(a,b));
		printf("\n The power of the elents:%d",pov(a,b));
	return 0;
}
