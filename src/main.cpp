#include <bits/stdc++.h>
using namespace std;

const int ALPHA = 2;
const int BETA  = 3;

struct Edge {
    int to;
    int distance;
    int traffic;
    int pollution;
};

class Graph {
    int V;
    vector<vector<Edge>> adj;

public:
    Graph(int v) {
        V = v;
        adj.resize(V);
    }

   
    void addEdge(int u, int v, int d, int t, int p) {
        adj[u].push_back({v, d, t, p});
        adj[v].push_back({u, d, t, p}); 
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Node " << i << " -> ";
            for (auto &e : adj[i]) {
                cout << "[to:" << e.to
                     << ", d:" << e.distance
                     << ", t:" << e.traffic
                     << ", p:" << e.pollution << "] ";
            }
            cout << endl;
        }
    }

    vector<int> dijkstra(int src, int dest) {
        vector<int> dist(V, INT_MAX);
        vector<int> parent(V, -1);

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [currCost, u] = pq.top();
            pq.pop();

            if (u == dest) break;

            for (auto &e : adj[u]) {
                int v = e.to;
                int edgeCost =
                    e.distance +
                    ALPHA * e.traffic +
                    BETA  * e.pollution;

                if (dist[u] + edgeCost < dist[v]) {
                    dist[v] = dist[u] + edgeCost;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        vector<int> path;
        for (int v = dest; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());

        cout << "\nTotal Climate Cost: " << dist[dest] << endl;
        return path;
    }
};

int main() {
    int V, E;
    cout << "Enter number of locations and roads: ";
    cin >> V >> E;

    Graph g(V);

    cout << "Enter u v distance traffic pollution:\n";
    for (int i = 0; i < E; i++) {
        int u, v, d, t, p;
        cin >> u >> v >> d >> t >> p;
        g.addEdge(u, v, d, t, p);
    }

    cout << "\nCity Map:\n";
    g.printGraph();

    int src, dest;
    cout << "\nEnter source and destination: ";
    cin >> src >> dest;

    vector<int> path = g.dijkstra(src, dest);

    cout << "Best Climate-Aware Path: ";
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

