#include <iostream>
using namespace std;
bool search(int input[][50], int target, int m, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (input[i][j] == target)
            {
                return true;
            }
        }
    }
        return false;
}

int main()
{
    int input[50][50];
    int m, n;
    cout << "Enter the value of m and n : " << endl;
    cin >> m >> n;
    cout << "Enter the element of array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input[i][j];
        }
    }
    int target;
    cout << "target : " << endl;
    cin >> target;

    if (search(input, target, m, n))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}