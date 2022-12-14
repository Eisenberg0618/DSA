// dijktra's shortest path algorithm
#include <bits/stdc++.h>
using namespace std;
#define v 4
vector<int> dijkstra(int graph[v][v], int src)
{
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;
    vector<bool> fin(v, false);
    for (int i = 0; i < v; i++)
    {
        int u = -1;
        for (int j = 0; j < v; j++)
        {
            if (!fin[j] && (u == -1 || dist[j] < dist[u]))
                u = j;
        }
        fin[u] = true;
        for (int V = 0; V < v; V++)
        {
            if (graph[u][V] != 0 && fin[V] == false)
                dist[V] = min(dist[V], dist[u] + graph[u][V]);
        }
    }
    return dist;
}
int main()
{
    int graph[v][v] = {{0, 5, 100, 0}, {50, 0, 30, 200}, {100, 30, 0, 20}, {0, 200, 20, 0}};
    for (int x : dijkstra(graph, 0))
    {
        cout << x << " ";
    }
    return 0;
}