// #include<unordered_map>
// #include<list>

// bool iscycle(int i,  unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited, unordered_map<int, list<int>> adj){
//     visited[i] = true;
//     dfsvisited[i] = true;

//     for(auto x:adj[i]){
//         if(!visited[x]){
//             bool check = iscycle(x, visited, dfsvisited, adj);
//             if(check){
//                 return true;
//             }
//         }
//         else if(visited[x] && dfsvisited[x]){
//             return true;
//         }
//     }

//     dfsvisited[i] = 0;
//     return false;
// }   
// bool isCyclic(vector<vector<int>>& edges, int v, int e)
// {
// 	unordered_map<int, list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }

//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsvisited;

//     for(int i=0; i<v; i++){
//         if(!visited[i]){
//             bool check = iscycle(i, visited, dfsvisited, adj);
//             if(check){
//                 return true;
//             }
//         }
//     }
//     return false;


// }

// C++ program to demonstrate the
// above concept
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // x and z non-const var
    int x{5};
    int z = 6;

    // y and p non-const var
    char y = 'A';
    char p = 'C';

    // const pointer(i) pointing
    // to the var x's location
    int* const i = &x;

    // const pointer(j) pointing
    // to the var y's location
    char* const j = &y;

    // The values that is stored at the memory location can
    // modified even if we modify it through the pointer
    // itself No CTE error
    *i = 10;
    *j = 'D';

    // CTE because pointer variable
    // is const type so the address
    // pointed by the pointer variables
    // can't be changed
    // i = &z;
    // j = &p;

    cout << *i << " and " << *j << endl;
    cout << i << " and " << j;
    

    return 0;
}
