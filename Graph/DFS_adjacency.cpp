#include <iostream>
using namespace std;

void print(int **edges, int n, int sv)
{
    cout << sv << endl;
    for (int i = 0; i < n; i++)
    {
        if (edges[sv][i] == 1)
        {
            print(edges, n, i);
        }
    }
}

int main()
{
    int n; // no of vertices
    int e; // no of edges
    cin >> n >> e;

    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    print(edges, n, 0);
    return 0;
}