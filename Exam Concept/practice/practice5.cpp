#include<iostream>
using namespace std;
void insertionSort(int n, int arr[]){
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j;
        for (j = i-1; j >=0; j--)
        {
            if (current<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=current;
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
    insertionSort(n,arr);
    return 0;
}