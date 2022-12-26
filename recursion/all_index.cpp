#include<iostream>
using namespace std;
int all_index(int input[],int n,int x,int output[]){
    if (n==0)
    {
        return 0;
    }
    int ans=all_index(input+1, n-1, x, output);
    if (input[0]==x)
    {
        
    for (int i = ans-1; i >=0; i--)
    {
            output[i+1]=output[i]+1;
        
    }
    output[0]=0;
    ans++;
    }
    else
    {
        for (int i = ans-1; i >=0; i--)
    {
            output[i]=output[i]+1;
        
    }
    }
    
    return ans;
    
}
void array(int input[],int n,int x){
    int output[n];
    int size=all_index(input,n,x,output);
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<" ";
    }
    
}
int main()
{
    int input[100];
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    array(input,n,x);
    
    return 0;
}