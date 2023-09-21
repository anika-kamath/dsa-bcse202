//dfs in undirected graph
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<set>
#include<vector>
using namespace std;

void dfsHelper(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj,vector<int> &component){
    component.push_back(node);
    visited[node]=true;

    //recursive call for every connected node
    for(auto i:adj[node]){
        if(!visited[i]){
            dfsHelper(i,visited,adj,component);
        }
    }
}

vector<vector<int>> dfs(int V, vector<vector<int>> &edges){
    //prep adjList
    unordered_map<int,list<int>> adj;

    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> component;
            dfsHelper(i,visited,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<vector<int>> edgeList;
    cout << "Enter the edges (format: u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        edgeList.push_back({u, v});
    }

    vector<vector<int>> result = dfs(vertices, edgeList);

    cout << "Connected components of the graph:" << endl;
    for (const vector<int>& component : result) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}