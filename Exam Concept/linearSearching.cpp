#include <iostream>
using namespace std;
int linearSerach(int n, int arr[],int x)
{
    
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin>>x;
    cout << linearSerach(n, arr,x) << endl;
    return 0;
}
