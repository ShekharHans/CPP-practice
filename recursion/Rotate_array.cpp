#include<iostream>
using namespace std;
int search(int arr[],int n,int d){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==d){
            return i;
        }
    }
    
}
int rotate(int arr[],int n,int d){
    int index=search(arr,n,d)+1;
    int i=0;
    while (index--)
    {
        int temp=arr[0];
        for ( int j=0; j < n; j++)
        {
            arr[j]=arr[j+1];
        }
        
        arr[n-1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotate(arr,n,d);
    return 0;
}