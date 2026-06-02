/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    char s[20];int i,j=0,c=0;
    scanf("%s",s);
    while(s[j]!='\0'){
      j++;
    }
    printf("%d",j);
  for(i=0;i<j/2;i++){
      char temp=s[i];
    s[i]=s[j-i-1];
    s[j-i-1]=temp;
  }
  printf("\n%s",s);
}