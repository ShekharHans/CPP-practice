#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int mx=INT32_MIN;
    int array[n];
        cout<<"Enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"max"<<endl;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,array[i]);
        cout<<mx<<endl;
    }
    return 0;
}