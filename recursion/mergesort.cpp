#include <bits\stdc++.h>
using namespace std;
void mergesort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    while ()
    {
        /* code */
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
    int start = 0, end = n - 1;
    mergesort(arr,start,end);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}