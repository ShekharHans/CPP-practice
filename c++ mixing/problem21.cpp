#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    int input[100];
    int i;
    cout<<"Enter the element of array : "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    int j;
    cout<<"Enter the value  of  j : "<<endl;
    cin>> j;
    for (int j = 0; j < n;j++)
    {
        if (i==j)
        {
            cout<<"yes"<<endl;
            
            }
        
    }
        if(i!=j)
        {
            cout<<"no"<<endl;
        }
    

    

    return 0;
}