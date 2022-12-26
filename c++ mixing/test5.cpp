#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the of m & n : "<<endl;
    cin>>m>>n;
    bool divided=false;
    for(int i=m ;i<n;i++){
        if (n%m==0)
        {
            divided =true;
        }
    }
    if (divided)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }
    
    
    return 0;
}