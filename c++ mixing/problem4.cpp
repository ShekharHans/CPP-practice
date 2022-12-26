#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the 1st value : "<<endl;
    cin>>a;
    cout<<"Enter the 2nd value : "<<endl;
    cin>>b;
    bool isEqual=(a==b);
    bool isGreater=(a<b);
    bool isLess=(a>b);
    cout<<"Are they equal : "<<isEqual<<endl;
    cout<<"Are they Greater : "<<isGreater<<endl;
    cout<<"Are they Less : "<<isLess<<endl;
    return 0;
}