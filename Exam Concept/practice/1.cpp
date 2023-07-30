#include <iostream>
using namespace std;
void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<min){
            min=arr[j];
            minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(n,arr);
    return 0;
}