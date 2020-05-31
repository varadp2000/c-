#include<bits/stdc++.h>
using namespace std;

//Graph displayed as adjecency list

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x;  
    } 
} 
  
// Driver code 
int main() 
{ 
    int V,u,v; 
    cout << "Enter edges";
    cin >> V;
    cout << endl;
    vector<int> adj[V]; 
    while(cin >> u >> v){
        if(u==-1 && v==-1) break;
        addEdge(adj, u, v);
        cout << endl;
    }
    printGraph(adj, V); 
    return 0;
} 