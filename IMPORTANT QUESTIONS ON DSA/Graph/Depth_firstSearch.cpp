// Depth First Search
#include <bits/stdc++.h>
using namespace std;
// given source
void DFSrec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int v : adj[s])
    {
        if (visited[v] == false)
        {
            DFSrec(adj, v, visited);
        }
    }
}
void DFS(vector<int> adj[], int s, int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    DFSrec(adj, s, visited);
}
// Disconnected graph
void dfsrec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int v : adj[s])
    {
        if (visited[v] == false)
        {
            dfsrec(adj, v, visited);
        }
    }
}
void dfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
            dfsrec(adj, i, visited);
    }
}
// count island in DFS
void dfsrec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    // cout<<s<<" ";
    for (int v : adj[s])
    {
        if (visited[v] == false)
            dfsrec(adj, v, visited);
    }
}
int Dfs(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            dfsrec(adj, i, visited);
            count++;
        }
    }
    return count;
}
void addEdeges(vector<int> adj[], int v, int u)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int v : adj[i])
            cout << v << " ";
        cout << "\n";
    }
}
int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdeges(adj, 0, 1);
    addEdeges(adj, 0, 2);
    addEdeges(adj, 1, 2);
    addEdeges(adj, 1, 3);
    addEdeges(adj, 2, 3);
    DFS(adj, 0, v);
    return 0;
}