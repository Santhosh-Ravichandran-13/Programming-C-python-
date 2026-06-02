/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i;
	float tr[24];

	int hma=0;
	int hmi=0;
	float avg,s=0;
	printf("The Temperature readings of the day is\n");
	for(i=1; i<=24; i++) {
		printf("The temperature reading of hour %d is :\n",i);
		scanf("%f",&tr[i]);
		if(tr[i]<0){
		    printf("error");
		    break;
		}else{
		s=s+tr[i];
	}
	}
	if(tr[i]>0){
	float maxt=tr[1];
	float mint=tr[1];
	for(i=1; i<=24; i++) {
		if(tr[i]>maxt) {
			maxt=tr[i];
			hma=i;
		}
	}
	for(i=1; i<=24; i++) {
		if(tr[i]<mint) {
			mint=tr[i];
			hmi=i;
		}
	}
	avg=s/24;
	printf("\nThe day is:");
	if(avg>=35) {
		printf("\nHot day");
	}
	else if(avg<35 && avg>=20) {
		printf("\nNormal day");
	} else {
		printf("\nCold day");
	}
	printf("\nThe maximum temperature of the day is :%f",maxt);
	printf("\nThe minimum temperature of the day is :%f",mint);
	printf("\nThe hour of the maximum temperature of the day is :%d",hma);
	printf("\nThe hour of the minimum temperature of the day is :%d",hmi);
}
else{
    
}

	return 0;
}
