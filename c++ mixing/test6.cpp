#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j;
            j++;
            if (j>i )
            {
                
                break;
            }
            
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}