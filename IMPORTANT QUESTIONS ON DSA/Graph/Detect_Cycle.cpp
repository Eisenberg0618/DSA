// Detect cycle in undirected graph
#include <bits/stdc++.h>
using namespace std;
void bfsrec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    for (int v : adj[s])
    {
        if (visited[v] == false)
            bfsrec(adj, v, visited);
    }
}
bool Bfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == true)
            return true;
        else
            bfsrec(adj, i, visited);
    }
    return false;
}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    cout << "Following is BFS " << endl;
    if (Bfs(adj, v))
        cout << "Cycle Found ";
    else
        cout << "Not Cycle found ";
    return 0;
}