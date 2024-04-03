#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;

    void addEdge(int u,int v,int weight){
        adj[u].push_back({v,weight});
    }

    void printadj(){
        for(auto x:adj){
            cout<<x.first<<" -> ";
            for(auto y:x.second){
                cout<<"("<<y.first<<","<<y.second<<") ";
            }
            cout<<endl;
        }
    }

    void dfs(int i, unordered_map<int,bool> &visited, stack<int> &s){
        visited[i] = 1;
        for(auto x:adj[i]){
            if(!visited[x.first]){
                dfs(x.first,visited,s);
            }
        }
        s.push(i);
    }

    void findDist(int src,vector<int> &dist,stack<int> s){
        dist[src] = 0;

        while(!s.empty()){
            int top = s.top();
            s.pop();
            if(dist[top] != INT_MAX){
                for(auto x:adj[top]){
                    if(dist[top] + x.second < dist[x.first]){
                        dist[x.first] = dist[top] + x.second;
                    }
                }
            }
           
        }
    }

};

int main(int argc, char const *argv[])
{
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    g.printadj();

    unordered_map<int,bool> visited;
    stack<int> s; //will contain topological sorted item
    int n = 6; //in this case n = 6
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    }
    cout<<endl;
    vector<int> dist(n);

    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
    }
    int src = 1; //from where distane is to be find
    g.findDist(src, dist, s);

    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<dist[i]<<endl;
    }
    return 0;
}
