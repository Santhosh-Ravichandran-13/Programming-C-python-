/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,a=0;
	int n1,i;
	
	printf("The size  of the array 1 is:");
	scanf("%d",&n);
	printf("The size  of the array 2 is:");
	scanf("%d",&n1);
	int arr[n],arr1[n1];
	if(n1==n) {
		printf("The first array is :");
		for(i=0; i<=n; i++) {
			scanf("%d",&arr[i]);
		}
		printf("The second array is :");
		for(i=0; i<=n1; i++) {
			scanf("%d",&arr1[i]);
		}
		for(i=0; i<=n; i++) {
			arr[i]=arr[i]+arr1[i];
		}
		for(i=0;i<=n; i++) {
		printf("\n%d",arr[i]);

	}
	} else {
		printf("The size is wrong..");
	}
	
	return 0;
}
