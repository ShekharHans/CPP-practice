#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int d =2; 
    bool divided =false;
    while (d<n)
    {
        if (n%d==0)
        {
            cout<<"n is not a prime number"<<endl;
            divided =true;
        }
        d++;
    }
    if (!divided)
    {
        cout<<"n is prime"<<endl;
    }
    
    return 0;
} 
