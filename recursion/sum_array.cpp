#include<bits/stdc++.h>
using namespace std;
int Sum_array(int input[],int n )
{
    int sum=0;
    if (n<=0)
    {
        return 0;
    }
    int smallOutput=Sum_array(input,n-1);
    int Output=smallOutput+input[n-1]; 
    return Output;
    
}

int main()
{
    int n;
    cin>>n;
    int input[100];
    for (int  i = 0; i < n; i++)
    {
    
        cin>>input[i];
        
    }
    int output=Sum_array(input,n);
    cout<<output<<endl; 

    return 0;
}