#include <iostream>
using namespace std;
void increment(int &n)
{
    n++;
}
// bad practice
int &f(int n)
{
    int a = n;
    return a;
}
int main()
{
    int i = 10;
    int &j = i; //"&"--->Reference Variable
    i++;
    cout << j << endl;
    int k = 100;
    j = k;
    cout << i << endl;
    increment(i);
    cout << i << endl;
    // bad practice
    int &x = f(i);
    cout << i << endl;

    return 0;
}