#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the 1st value : "<<endl;
    cin>>a;
    cout<<"Enter the 2nd value : "<<endl;
    cin>>b;
    cout<<"Enter the 3nd value : "<<endl;
    cin>>c;
    bool isEqual= (a==b) || (b==c);
    bool isGreater= (a<b)|| (b<c);
    bool isLess= (a>b)|| (b>c);
    cout<<"Are they Equal : "<<isEqual<<endl;
    cout<<"Are they Greater : "<<isGreater<<endl;
    cout<<"Are they Less : "<<isLess<<endl;


    return 0;
}