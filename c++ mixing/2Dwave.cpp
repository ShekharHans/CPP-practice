#include <iostream>
using namespace std;
void printWave(int name[][100], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << name[j][i] << " ";
            }
        }
        else if (i % 2 != 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << name[j][i] << " ";
            }
        }
    }
}

int main()
{
    int name[100][100];
    int m, n;
    cout << "Enter the value of m and n : " << endl;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> name[i][j];
        }
    }

    printWave(name, m, n);
    return 0;
}