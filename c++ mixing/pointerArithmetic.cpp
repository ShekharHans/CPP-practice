#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
    return 0;
}