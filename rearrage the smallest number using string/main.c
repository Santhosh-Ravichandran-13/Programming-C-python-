/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char b[20];
    scanf("%s",b);
    int i,j;
    int len=strlen(b);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if((b[i]-'0')>(b[j]-'0')){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        if(b[0]=='0'){
        for(i=0;i<len;i++){
            if(b[i]!='0'){
                char temp=b[i];
                b[i]=b[0];
                b[0]=temp;
                break;
            }
    }
        }
    }
  
   printf("%s",b);
    return 0;
}