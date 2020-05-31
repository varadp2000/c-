#include<bits/stdc++.h>
using namespace std;
#define cols 3
#define rows 3


void addEdge(int arr[][cols], int u, int v, int type){
    arr[u][v] = 1;
    if(type == 0)
        arr[v][u] = 1;
}

void display(int arr[rows][cols]){

    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void DFS(int arr[][cols]){
    cout << "DFS" << "\n";
    int visited[cols] = {0};
    stack<int> st;
    int i=0;
    visited[i] = 1;
    st.push(i);
    cout << st.top();
    while(st.empty() != 1){ 
        i=st.top();
        st.pop();
        for(int j=0;j<cols;i++){
            if(arr[i][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                st.push(j);
                cout << j <<"\t";
            }
        }
    }
}

int main(){
    cout << "Select Type(0:Undirected\n1:Directed\n";
    int type;
    cin >> type;
    int graph[rows][cols] = {0};
    int u,v;
    while(cin >>u >>v){
        if(u== -1 && v==-1)
            break;
        cout << "Enter Edges";
        addEdge(graph, u, v, type);
    }

    display(graph);

    cout << "DFS on GRAPH:\n";
    DFS(graph);
}