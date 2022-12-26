#include<iostream>
using namespace std;


int main()
{
    int input[50][50];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cin>>input[i][j];
        }
        
    }
    
    return 0;
}