#include<iostream>
using namespace std;

int main()
{
    char c;
    c=cin.get();
    int count=0;
    while (c!='$')
    {
        c=cin.get();
        count++;
    }
    cout<<count<<endl;
    return 0;
}