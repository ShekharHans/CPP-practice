#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<i<<endl;
    // }
    int i=1;
    // while (i<=n)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=n);
    
    
    return 0;
}