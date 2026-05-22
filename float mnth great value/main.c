//given an integer array, return the nth largest element.

#include<stdio.h>
int main() {
	int n,i,j,k,c=0;
	printf("Enter The Size:\n");
	scanf("%d",&n);
	float arr[n];
	printf("Enter The elements:");
	for(i=0; i<n; i++) {
		scanf("%f",&arr[i]);
	}
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(arr[i]<arr[j]) {
				float t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("elements :");
	for(i=0; i<n; i++) {
		printf("%f\n",arr[i]);
	}
	printf("Enter the kth element:\n");
	scanf("%d",&k);
  for(i=1;i<=n;i++){
        if(arr[i]!=arr[i-1]){
            c++;
        }
         if(c==k-1){
            printf("the %d maximum in the array is :%f",k,arr[i]);
            break;
        } 
    }
	return 0;
}