#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[50];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            
            cout<<j<<j+1<<endl;
            break;
        }
        break;
    }
    
    
    return 0;
}