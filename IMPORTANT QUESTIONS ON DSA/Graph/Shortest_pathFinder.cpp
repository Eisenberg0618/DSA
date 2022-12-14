// Shortest Path finder
#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[], int v, int s)
{
    bool visited[s];
    int dist[v];
    dist[s] = 0;
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                dist[v] = dist[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void addEdges(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 5;
    vector<int> adj[v];
    addEdges(adj, 0, 1);
    addEdges(adj, 0, 2);
    addEdges(adj, 1, 3);

    return 0;
}