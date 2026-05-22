#include <stdio.h>
void heapify(int a[],int n,int i){
    int largest=i,l=2*i+1,r=2*i+2,temp;
    if(l<n && a[l]>a[largest])
        largest=l;
    if(r<n && a[r]>a[largest])
        largest=r;
    if(largest!=i){
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapify(a,n,largest);}}
int main(){
    printf("Santhosh R\n");
    int n,i,a[50],temp;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);}
    for(i=n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(i=n-1;i>=0;i--){
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);}
    printf("Heap sorted values:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);}
