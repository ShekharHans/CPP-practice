#include <iostream>
using namespace std;
int Function(int input[], int n, int max)
{
    for (size_t i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (input[i] > max)
            {
                max = input[i];
            }
            cout << input[i] << endl;
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int input[50];
    cout << "Enter the element of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int max = INT32_MIN;

    Function(input, n, max);
    cout << "max : " << max << endl;

    return 0;
}