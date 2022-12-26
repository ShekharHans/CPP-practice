#include <iostream>
using namespace std;
int Numzeros(int num)
{
    int count = 0;
    if (num == 0)
    {
        return 1;
    }
    if (num < 10)
    {
        return 0;
    }

    
    if (num % 10 == 0)
    {
        return Numzeros(num / 10) + 1;
    }
    return Numzeros(num/10);
}
int main()
{
    int num;
    cin >> num;
    int output = Numzeros(num);
    cout << output << endl;
    return 0;
}