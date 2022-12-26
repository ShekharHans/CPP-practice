#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    // int i;
    for ( int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
    cout<<arr[i]<<" ";
        
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    
    return 0;
}