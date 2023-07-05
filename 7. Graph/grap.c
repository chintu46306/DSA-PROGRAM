//write a c program of Graph Implementation, BFS, DFS, Minimum cost spanning tree, shortest path algorithm
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int adj[MAX][MAX];
int visited[MAX];
int n;
void create_graph();
void display();
void BFS(int v);
void DFS(int v);
void main()
{
int i, v;
create_graph();
while(1)
{
printf("
1.Display
2.BFS
3.DFS
4.Exit
");
printf("Enter your choice:");
scanf("%d",&i);
switch(i)
{
case 1:
display();
break;
case 2:
for(v=0; v<n; v++)
visited[v] = 0;
printf("Enter starting vertex for BFS:");
scanf("%d",&v);
BFS(v);
break;
case 3:
for(v=0; v<n; v++)
visited[v] = 0;
printf("Enter starting vertex for DFS:");
scanf("%d",&v);
DFS(v);
break;
case 4:
exit(0);
}
}
}
void create_graph()
{
int i, max_edges, origin, dest;
printf("Enter number of vertices:");
scanf("%d",&n);
max_edges = n*(n-1);
for(i=1; i<=max_edges; i++)
{
printf("Enter edge %d( -1 -1 to quit):",i);
scanf("%d %d",&origin,&dest);
if((origin == -1) && (dest == -1))
break;
if(origin >= n || dest >= n || origin<0 || dest<0)
{
printf("Invalid edge!");
i--;
}
else
adj[origin][dest] = 1;
}
}
void display()
{
int i, j;
for(i=0; i<n; i++)
{
for(j=0; j<n; j++)
printf("%4d",adj[i][j]);
printf("
");
}
}
void BFS(int v)
{
int i;


        
