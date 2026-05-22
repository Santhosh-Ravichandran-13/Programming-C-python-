
#include <stdio.h>

int main()
{
    int n=0;
   int arr[100];
   int i,s;
   printf("the elements of the  array is \n ");
   for(i=0;i<100;i++){
       scanf("%d",&arr[i]);
       if(arr[i]==-1){
           break;
       }
       n++;
   }
   
   s=arr[0];
   for(i=1;i<n;i++){
           if(s>arr[i]){
               s=s; 
           }else{
              s=arr[i];
           }
            
   }
   printf("The greatest number is %d\n ",s);
    return 0;
}
