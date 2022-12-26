#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int sum [n];
    cout<<"Element : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>sum[i];
    }
    int curr=0;
    for (int i = 0; i < n; i++)
    {
        curr=0;
        for (int j = i; j < n; j++)
        {
            curr+=sum[j];
            cout<<"output : "<<sum[j]<<endl;
            cout<<"toal : "<<curr<<endl;
        }
        
    }
    
    return 0;
}