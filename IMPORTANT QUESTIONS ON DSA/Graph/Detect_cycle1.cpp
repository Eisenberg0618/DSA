// Detect cycle in directed graph using dfs
#include <bits/stdc++.h>
using namespace std;
bool dfsrec(vector<int> adj[], int s, bool visited[], bool res[])
{
    visited[s] = true;
    res[s] = true;
    for (int v : adj[s])
    {
        if (visited[v] == false && dfsrec(adj, v, visited, res))
            return true;
        else if (res[v] == true)
            return true;
    }
    res[s] = false;
    return false;
}
bool dfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    bool res[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            if (dfsrec(adj, i, visited, res) == true)
                return true;
        }
    }
    return false;
}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 2, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 3);
    if (dfs(adj, v))
        cout << "Cylce found " << endl;
    else
        cout << "Cycle not found " << endl;
    return 0;
}