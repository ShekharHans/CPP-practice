#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    char i=1;
    while (i<n)
    {
        int j=1;
        while (j<i)
        {
            cout<<'*';
        }
        
    }
    
    return 0;
}