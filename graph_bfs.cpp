//bfs in undirected graph
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<set>
#include<vector>

using namespace std;

void prepareAdjList(unordered_map<int,list<int>> &adj, vector<pair<int,int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void bfs(unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited,vector<int> &ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);

        //traverse all neighbours of frontNode
        for(auto i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int,int>> edges){
    unordered_map<int,list<int>> adj;
    vector<int> ans;

    unordered_map<int,bool> visited;

    prepareAdjList(adj,edges);

    //traverse all components of graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adj,visited,ans,i);
        }
    }
    return ans;
}

int main() {
    int vertex, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertex;

    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<pair<int, int>> edgeList;
    cout << "Enter the edges (format: u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        edgeList.push_back(make_pair(u, v));
    }

    vector<int> result = BFS(vertex, edgeList);

    cout << "BFS traversal of the graph:" << endl;
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}