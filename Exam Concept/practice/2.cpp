#include<iostream>
using namespace std;
void bubbleSort(int n,int arr[]){
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n-1-j; i++)
        {
            if (arr[i]>arr[i+1])
            {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        
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
    bubbleSort(n,arr);
    return 0;
}