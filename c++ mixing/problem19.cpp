#include<iostream>
using namespace std;
int func(int input[], int n){
    // cout<<"Function : "<<sizeof(input)<<endl;
    cout<<"print : "<<endl;
    for (int i = 0; i <n ; i++)
    {
        cout<<input[i]<<" "<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter the array elements : "<<endl;
    // cout<<input<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    // cout<<"main : "<<sizeof(input)<<endl;
    func(input,n);
    return 0;
}