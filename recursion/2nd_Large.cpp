#include <iostream>
using namespace std;
void secondlarge(int arr[], int n, int i)
{

    for (i; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
// void sameElem(int arr[], int n){
//     secondlarge(arr,n,i);
//     for (int i = n; i >0; i--)
//     {
//         if (arr[i]==arr[i-1])
//         {
//             cout<<arr[i-2];
//         }

//     }

// }

int main()
{
    int n;
    cin >> n;
    int arr[100];
    int i=0;
    for ( i ; i < n; i++)
    {
        cin >> arr[i];
    }
    secondlarge(arr, n, i);
    // int i = 0;
    // int x;
    if (arr[i] == arr[n-1])
    {
        cout << INT32_MIN << endl;
    }
    else if (arr[n - 1] > arr[n - 2])
    {
        cout << arr[n - 2] << endl;
    }
    else
    {
        
        int x;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    x=arr[j];
                    
                }
                
                
                
            }
            
        }
        
        cout<<x<<endl;
    }
    // cout<<x<<endl;
    return 0;
}