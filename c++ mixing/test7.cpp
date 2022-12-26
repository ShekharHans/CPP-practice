#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    bool divided=false;
    for (int i = m; i < n; i++)
    {
        if (n % i==0) 
        {
            divided=true;
            break;
        }   
        }
        if (divided)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
            cout<<"Prime"<<endl;
        }
        
    
    
    return 0;
}