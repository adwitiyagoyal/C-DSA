#include<bits/stdc++.h>
using namespace std;

void makeSet(vector<int> &parent, vector<int> &rank, int n){
    for(int i=0;i<n;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}
int findParent(vector<int> parent, int node){
    if(parent[node] == node){
        return node;
    }

    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank){
    u = findParent(parent, u);
    v = findParent(parent, v);

    if(rank[u] > rank[v]){
        parent[v] = u;
    }
    else if(rank[u] < rank[v]){
        parent[u] = v;
    }
    else{
        parent[u] = v;
        rank[v]++;
    }
}

bool cmp(vector<int> &a, vector<int> &b){
    return a[2] < b[2];
}

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{   
    sort(edges.begin(), sort.end(), comp);
    vector<int> parent(n);
    vetor<int> rank(n);
    makeSet(parent, rank, n);

    int minWeight = 0;

    for(int i=0;i<edges.size();i++){
        int u = findParent(parent, edges[i][0]);
        int v = findParent(parent, edges[i][1]);
        int wt = edges[i][2];

        if(u != v){
            minweight += wt;
            unionSet(u,v, parent, rank);
        }
    }
    return minWeight; 

}

int main(int argc, char const *argv[])
{
    int n; //size
    vector<int> parent(n);
    vetor<int> rank(n);
    makeSet(parent, rank, n);
    /* code */
    return 0;
}

