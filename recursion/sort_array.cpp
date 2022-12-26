#include <iostream>
using namespace std;
void sort(int arr[],int arr1[], int n1,int n2,int arr2[])
{
    int i = 0, j = 0, k = 0;
    while (i<n1 && j <n2)
    {
        if (arr[i] < arr1[j]){

            arr2[k] = arr[i];
            k++;
            i++;
        }
        else{

            arr2[k] = arr1[j];
            k++;
            j++;
        }
    }
    
    while (i<n1)
    {
        arr2[k]=arr[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        arr2[k]=arr1[j];
        k++;
        j++;
    }
}
int main()
{
    int arr[100];
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    int arr1[100];
    int n2;
    cin >> n2;
    
    for (int j = 0; j < n2; j++)
    {
        cin >> arr1[j];
    }
    int arr2[n1 + n2];
    sort(arr,arr1,n1,n2,arr2);
    for (int i = 0; i < n1 + n2; i++)
        cout << arr2[i] << " ";

    return 0;
}