#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;
    cout << "Enter the value of x, y & z : " << endl;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagoren triplet" << endl;
    }
    else
    {
        cout << "not a pythagorean triplet" << endl;
    }

    return 0;
}