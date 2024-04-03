#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph{
    public:
        unordered_map<int, list<int>> adj;
        void addEdge(int u, int v, bool dir){
            //dir->0 undirected
            //dir->1 directed

            adj[u].push_back(v);
            if(!dir){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<" -> ";
                for(auto j:i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};




 int main(int argc, char const *argv[])
 {
    /* code */
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    
    int m;
    cout<<"enter the number of edges"<<endl;
    cin>> m;

    graph g;

    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();   

    return 0;
 }