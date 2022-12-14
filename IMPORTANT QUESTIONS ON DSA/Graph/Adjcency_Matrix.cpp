// Adjecency matrix
#include <bits/stdc++.h>
using namespace std;
class Graph
{
private:
    bool **adjmatrix;
    int numVertices;

public:
    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        adjmatrix = new bool *[numVertices];
        for (int i = 0; i < numVertices; i++)
        {
            adjmatrix[i] = new bool[numVertices];
            for (int j = 0; j < numVertices; j++)
                adjmatrix[i][j] = false;
        }
    }
    void addEdges(int i, int j)
    {
        if ((i >= 0 && i < numVertices) && (j >= 0 && j < numVertices))
        {
            adjmatrix[i][j] = true;
            adjmatrix[j][i] = true;
        }
        else
            cout << "Enter a valid edge case " << endl;
    }
    void removeEdge(int i, int j)
    {
        if ((i >= 0 && i < numVertices) && (j >= 0 && j < numVertices))
        {
            adjmatrix[i][j] = false;
            adjmatrix[j][i] = false;
        }
        else
            cout << "Enter a valid edge case " << endl;
    }
    void toString()
    {
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjmatrix[i][j] << " ";
            cout << "\n";
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdges(0, 1);
    g.addEdges(0, 2);
    g.addEdges(1, 2);
    g.addEdges(2, 0);
    g.addEdges(3, 3);
    g.toString();
    return 0;
}