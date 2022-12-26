#include<iostream>
using namespace std;
void mergeSort(int arr[],int start,int end){
    if (start>=end)
    {
        return;
    }
    int mid=(start+end)/2;
    if (arr[0]<arr[1])
    {
        swap(arr[0],arr[1]);
    }
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    
    
    
}
int main()
{
    int size;
    cin>>size;
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=size-1;
    mergeSort(arr,start,end);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}