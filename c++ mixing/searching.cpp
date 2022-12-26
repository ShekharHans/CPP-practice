#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
    int start=0,end=n-1;
    while (start<=end)  
    {
        int mid=(start+end)/2;
        if (arr[mid]==x)
        {
            return mid;
        }else if (x<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter the element of array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<binarySearch(input,n,x)<<endl;
    return 0;
}