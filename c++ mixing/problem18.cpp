#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    int input[20];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    
    
    int max=-100;
    for (int i = 0; i < n; i++)
    {
        if (input[i]>max)
        {
            max=    input[i];
        }
        
    }
        cout<<max<<endl;
    
    return 0;
}