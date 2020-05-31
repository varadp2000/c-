#include <bits/stdc++.h> 
using namespace std;


//Bellman Ford Algorithm for shortest path

    // Step 1: Initialize distances from src to all other vertices 
    // as INFINITE 

    // Step 2: Relax all edges |V| - 1 times. A simple shortest 
    // path from src to any other vertex can have at-most |V| - 1 
    // edges 

    // Step 3: check for negative-weight cycles.  The above step 
    // guarantees shortest distances if graph doesn't contain 
    // negative weight cycle.  If we get a shorter path, then there 
    // is a cycle. 
            // If negative cycle is detected, simply return 
struct Edge { 
    int src, dest, weight; 
}; 
  

struct Graph { 
    int V, E; 
    struct Edge* edge; 
}; 

struct Graph* createGraph(int V, int E) 
{ 
    struct Graph* graph = new Graph; 
    graph->V = V; 
    graph->E = E; 
    graph->edge = new Edge[E]; 
    return graph; 
} 
  
void printArr(int dist[], int n) 
{ 
    printf("Vertex   Distance from Source\n"); 
    for (int i = 0; i < n; ++i) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
  
void BellmanFord(struct Graph* graph, int src) 
{ 
    int V = graph->V; 
    int E = graph->E; 
    int dist[V] = {INT_MAX}; 
    dist[src] = 0;
  

    for (int i = 1; i <= V - 1; i++) { 
        for (int j = 0; j < E; j++) { 
            int u = graph->edge[j].src; 
            int v = graph->edge[j].dest; 
            int weight = graph->edge[j].weight; 
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) 
                dist[v] = dist[u] + weight; 
        } 
    } 
  
    
    for (int i = 0; i < E; i++) { 
        int u = graph->edge[i].src; 
        int v = graph->edge[i].dest; 
        int weight = graph->edge[i].weight; 
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) { 
            printf("Graph contains negative weight cycle"); 
            return;
        } 
    } 
  
    printArr(dist, V); 
}


struct Graph* addEdge(struct Graph* graph, int i, int u, int v, int cost){
    graph->edge[i].src = u;
    graph->edge[i].dest = v;
    graph->edge[i].weight = cost;

    return graph;
}

int main() 
{ 
    cout << "Enter Vertices and Edges";
    int V,E;
    cin >> V >> E;
    struct Graph* graph = createGraph(V, E); 

    for(int i=0; i<E; i++){
        int u=0,v=0,cost=0;
        cout << "Enter U, V, Weight";
        cin >> u >> v >> cost;
        graph =addEdge(graph,i,u,v,cost);
    }
  
    BellmanFord(graph, 0); 
  
    return 0; 
} 