// minmum spanning tree (Prim's algorithm)
#include <bits/stdc++.h>
using namespace std;
#define v 4
int primeMst(int graph[v][v])
{
    int key[v];
    int res = 0;
    fill(key, key + v, INT_MAX);
    bool mset[v];
    key[0] = 0;
    for (int i = 0; i < v; i++)
    {
        int u = -1;
        for (int j = 0; j < v; j++)
        {
            if (!mset[j] && (u == -1 && key[j] < key[u]))
                u = j;
        }
        mset[u] = true;
        res += key[u];
        for (int V = 0; V < v; V++)
        {
            if (graph[u][V] != 0 && mset[V] == false)
                key[V] = min(key[V], graph[u][V]);
        }
    }
    return res;
}
int main()
{
    int graph[v][v] = {{0, 5, 8, 0}, {5, 0, 10, 15}, {8, 10, 0, 20}, {0, 15, 20, 0}};
    cout << primeMst(graph) << endl;
    return 0;
}