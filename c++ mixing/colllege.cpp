#include <iostream>
using namespace std;
// Sorting
int sort(int n, int *arr)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - i - 1; i++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

// Liner Search
int linearSearch(int x, int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// binary serach
int binarySearch(int x, int start, int end, int *arr)
{
    int mid;
    mid = (start + end) / 2;
    if (start >= end)
    {

        return -1;
    }
    else
    {
        if (x == *(arr + mid))
        {
            return mid;
        }
        else if (x > *(arr + mid))
        {
            binarySearch(x, mid + 1, end, arr);
        }
        else
        {
            binarySearch(x, start, mid - 1, arr);
        }
    }
    return -1;
}

int main()
{
    int i, n;
    cout << "Enter total number of elements:"
         << "\n";
    cin >> n;
    int *arr = new int(n);
    cout << "Enter " << n << " elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key :";
    int x;
    cin >> x;
    int start = 0;
    int end = n;
    cout << "Enter 1 for linear Search or 2 for binary Search : ";
    int option;
    cin >> option;

    if (option == 1)
    {
        cout << "This is Linear Search" << endl;
        int index;
        index = linearSearch(x, n, arr);
        if (index == -1)
        {
            cout << "number is not present" << endl;
        }
        else
        {
            cout << "The index is : " << index << endl;
        }
    }
    else
    {
        sort(n, arr);
        cout << "This is Binary Search" << endl;
        int index1;
        index1 = binarySearch(x, start, end, arr);
        if (index1 == -1)
        {
            cout << "number is not present" << endl;
        }

        else
        {
            cout << "The index is : " << index1 << endl;
        }
    }
    delete (arr);
    return 0;
}
