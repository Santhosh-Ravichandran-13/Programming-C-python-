#include <stdio.h>
#include <stdlib.h>
struct node {
    int vertex;
    struct node *next;};
struct node *adj[10];
void addEdge(int u,int v){
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->vertex = v;
    n->next = adj[u];
    adj[u] = n;}
void display(int n){
    for(int i=0;i<n;i++){
        struct node *t = adj[i];
        printf("Vertex %d is connected to: ", i);
        if(!t) printf("No connections");
        while(t){ printf("%d ", t->vertex); t = t->next; }
        printf("\n");}}
int main(){
    printf("Santhosh R\n");
    int n, e, u, v;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &e);
    for(int i=0;i<n;i++) adj[i] = NULL;
    for(int i=0;i<e;i++){
        printf("Enter edge : ");
        scanf("%d %d", &u, &v);
        addEdge(u,v); }
    printf("\nGraph Adjacency List:\n");
    display(n);}
