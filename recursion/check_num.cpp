#include<iostream>
using namespace std;
bool Check_elem(int arr[],int size,int x){
    if (size==0)
    {
        return false;
    }
    
    if (arr[0]==x)
    {
        return true;
    }
    
    return Check_elem(arr+1,size-1,x);
    
    
}

int main()
{
    int size;
    cin>>size;
    int arr[100];
    
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    
    cout<<Check_elem(arr,size,x)<<endl;
    
    return 0;
}