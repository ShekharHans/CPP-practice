#include <iostream>
using namespace std;
void merge(int arr[], int n, int start, int mid, int end)
{
    int tempArr[n];
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            tempArr[k++] = arr[j++];
        }
        else
        {
            tempArr[k++] = arr[i++];
        }
        while (i <= mid)
        {
            tempArr[k++] = arr[i++];
        }
        while (j <= end)
        {
            tempArr[k++] = arr[j++];
        }
    }
    for (k = start; k <= end; k++)
    {
        arr[k] = tempArr[k];
    }
}
void mergeSort(int arr[], int n, int start, int end)
{
    int mid = (start + end) / 2;
    while (start < end)
    {
        mergeSort(arr, n, start, mid);
        mergeSort(arr, n, mid + 1, end);
        merge(arr, n, start, mid, end);
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
    int start = 0;
    int end = n - 1;
    mergeSort(arr, n, start, end);
    return 0;
}