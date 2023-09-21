//graph adjacency list representation in C++
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{
public:
    unordered_map< T,list<T> > adj;

    //make an edge from u to v
    void addEdge(T u,T v,bool direction){
        //direction = 0 means undirected graph
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        cout<<"Adjacency List for Graph: "<<endl;
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter number of edges: ";
    cin>>m;

    graph<int> g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0); //make an undirected graph
    }

    g.printAdjList();
    return 0;
}