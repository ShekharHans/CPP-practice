#include <iostream>
using namespace std;
void margeSort(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1;
        cin >> n1;
        int arr1[100];
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        int n2;
        cin >> n2;
        int arr2[100];
        for (int j = 0; j < n2; j++)
        {
            cin >> arr2[j];
        }
        int arr3[n1 + n2];
        margeSort(arr1, arr2, n1, n2, arr3);
        for (int i = 0; i < n1 + n2; i++)
        {
            cout << arr3[i] << " ";
        }
    }
    return 0;
}