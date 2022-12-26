#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int input [50];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    
    
    return 0;
}