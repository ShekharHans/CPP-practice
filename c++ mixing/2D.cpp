#include<iostream>
using namespace std;

int main()
{
    int a[50][50];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<< "row wise : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"column wise : "<<endl;
    for (int j = 0; j < n; j++)
    {
    
        for (int i = 0; i < m; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}