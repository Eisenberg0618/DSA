// Detect cycle in directed graph (using Khan's algorithm)
#include <bits/stdc++.h>
using namespace std;
bool topoSort(vector<int> adj[], int v)
{
    vector<int> inDegree(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
            inDegree[x]++;
    }
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (inDegree[i] == 0)
            q.push(i);
    }
    int count = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int x : adj[u])
        {
            if (--inDegree[x] == 0)
                q.push(x);
        }
        count++;
    }
    if (count != v)
        cout << "There Exists a cycle in the graph ";
    else
        cout << "There Exists no cycle in the graph ";
}
void addEdge(vector<int> adj[], int v, int u)
{
    adj[u].push_back(v);
}
int main()
{
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 4, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);
    topoSort(adj, v);
    return 0;
}