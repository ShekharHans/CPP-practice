#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of"<<endl;
    cin>>n;
    int input[20];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    
    
    int max=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (input[i]>max)
        {
            max=input[i];
        }
        
    }
        cout<<"max : "<<max<<endl;
    
    return 0;
}