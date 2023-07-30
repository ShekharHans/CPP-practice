#include<iostream>
using namespace std;
int linearSearch(int n,int x, int arr[]){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
    }
    
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
    int n,x;
    cin>>n>>x;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<linearSearch(n,x,arr)<<endl;
    }
    
    return 0;
}