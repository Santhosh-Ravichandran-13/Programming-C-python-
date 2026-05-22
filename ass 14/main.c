#include <stdio.h>
int stack[100], top = -1;
void allocate(int mem) {
	stack[++top] = mem;
	printf("Memory %d allocated\n", mem);}
void deallocate() {
	if(top==-1) printf("No memory to deallocate\n");
	else printf("Memory %d deallocated\n", stack[top--]);}
void display() {
	if(top==-1) printf("No memory allocated\n");
	else {
		printf("Current memory stack:\n");
		for(int i=top; i>=0; i--) printf("%d\n", stack[i]);}}
int main() {
    printf("Santhosh R\n");
	int n, mem, d;
	scanf("%d", &n);                  
	for(int i=0; i<n; i++) {
		scanf("%d",&mem);
		allocate(mem);}
	display();
	scanf("%d", &d);           
	for(int i=0; i<d; i++) deallocate();
	display();
	return 0;
}
