#include<iostream>
using namespace std;

int main()
{
    int input[50][50];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>input[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n; j++)
        {
            int temp=input[i][j];
            input[i][j]=input[j][i];
            input[j][i]=temp;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}