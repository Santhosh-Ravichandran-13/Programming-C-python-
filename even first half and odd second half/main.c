#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]%2!=0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Elements in sorted array:\n");
    for(i=0;i<n;i++){
       printf("%d\n",arr[i]);
    }
    
    
}