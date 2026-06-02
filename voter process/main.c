/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include<stdlib.h>
int main()
{ int n,i;
char op;
char id[10];
printf("The number of voters in the region:");
scanf("%d",&n);
 int c1=0,c2=0,c3=0,c4=0,c5=0;
 
	 for(i=0;i<=n;i++){
		
		printf("\nEnter the voter id :");
		scanf("%s",&id);
		printf("\nThe persons in the List is:");
		printf("\n1-->Rathish");
		printf("\n2-->Rahman");
		printf("\n3-->Ramez");
		printf("\n4-->Aasath");
		printf("\n5-->simbu");
		
		printf("\nEnter the person for the voting:");
		scanf(" %c",&op);
		switch(op) {
		case '1':
			c1++;
			break;
		case '2':
			c2++;
			break;
		case '3':
			c3++;
			break;
		case '4':
		 c4++;
			break;
		case '5':
			c5++;
			break;
		default :
			printf("Give Valid input ");
			break;
		}
	 }
 
	printf("\nThe total number of votes for Rathish is %d",c1);
		printf("\nThe total number of votes for Rahman is %d",c2);
		printf("\nThe total number of votes for Ramez is %d",c3);
  printf("\nThe total number of votes for Aasath is %d",c4);
  printf("\nThe total number of votes for simbu is %d",c5);
  
  if(c1>c2 && c1>c3 && c1 >c4 && c1>c5){
   printf("\nRathish got elected...>");
  }else if(c2>c1 && c2>c3 && c2>c4 && c2>c5){
   printf("\nRahman got elected...>");
  }else if(c3>c1 && c3>c1 && c3>c4 && c3>c5){
   printf("\nRamez got elected...>");
  }else if(c4>c1 && c4>c2 && c4>c3 && c4>c5){
    printf("\nAasath got elected...>");
  }else if(c5>c1 && c5>c2 && c5>c3 && c5>c4){
   printf("\nSimbu got elected...>");
  }
	return 0;
}