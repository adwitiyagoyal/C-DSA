#include <bits/stdc++.h>

using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {
    // Create adjacency list representation of the graph
    unordered_map<int, vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int weight = g[i].second;
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight}); // Ensure undirected edges
    }

    // Initialize distance, visited, and parent arrays
    vector<int> distance(n + 1, INT_MAX); // Initialize distances to infinity
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1); // Track MST edges

    // Set starting node as 1 (or any other node)
    distance[1] = 0; // Start from any node
    parent[1] = -1; // Starting node has no parent

    // Use a priority queue to prioritize edges based on weight
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1}); // Push starting node with distance 0

    while (!pq.empty()) {
        // Extract minimum distance node from priority queue
        int node = pq.top().second;
        pq.pop();

        // Mark node as visited to prevent cycles
        visited[node] = true;

        // Iterate through adjacent edges of the extracted node
        for (auto neighbor : adj[node]) {
            int adjNode = neighbor.first;
            int weight = neighbor.second;

            // Relax if unvisited and weight is less than current distance
            if (!visited[adjNode] && weight < distance[adjNode]) {
                distance[adjNode] = weight;
                parent[adjNode] = node;
                pq.push({weight, adjNode}); // Push the updated distance
            }
        }
    }

    // Construct and return the result vector containing MST edges
    vector<pair<pair<int, int>, int>> res;
    for (int i = 2; i <= n; i++) { // Start from 2 to exclude non-existent edge for node 1
        if (parent[i] != -1) { // Check if node is included in MST (avoid isolated nodes)
            res.push_back({{parent[i], i}, distance[i]});
        }
    }

    return res;
}


