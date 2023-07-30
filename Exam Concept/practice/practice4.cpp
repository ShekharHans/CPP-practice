#include<iostream>
using namespace std;
void bubbleSort(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        // for (int j = 0; j < n-1-i; j++)
        // {
        //     if (arr[j]>arr[j+1])
        //     {
        //         int temp = arr[j];
        //         arr[j] = arr[j+1];
        //         arr[j+1] = temp;
        //     }
            
        // }
        
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