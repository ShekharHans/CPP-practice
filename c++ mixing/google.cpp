#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the element of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    // max arithmetic subarray length(ans)
    int pd = a[1] - a[0];
    // previous common difference
    int j = 2;
    int curr = 2;
    // current arithmetic subarray lengh
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << "ans : "<<ans << endl;

    return 0;
}