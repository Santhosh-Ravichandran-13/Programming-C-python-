/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int d1,int d2){
    int temp=d1;
    d1=d2;
    d2=temp;
}
int main()
{
	int n,i,j;
	printf("Enter the size :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:");
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++) {
		for(j=i+1;j<n; j++) {
			if(arr[i]>arr[j]) {
				swap(arr[i],arr[j]);
			}

		}
	}
	printf("The sorted array is:");
	for(i=0; i<n; i++) {
		printf("\n%d",arr[i]);
	}
    for(i=1;i<n;i++){
        if((i%2==0) && (arr[i]<arr[i+1])){
            swap(arr[i],arr[i+1]);
        }
        if((i%2==1) && (arr[i]>arr[i+1])){
            swap(arr[i],arr[i+1]);
        }
    }
    printf("\nThe virgil sorted array is:");
	for(i=0; i<n; i++) {
		printf("\n%d",arr[i]);
	}
	return 0;
}
