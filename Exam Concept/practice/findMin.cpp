#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int j = 0; j < n - 1; j++)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    cout << min;
    return 0;
}
