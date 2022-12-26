#include<iostream>
using namespace std;
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    int smallOutput1=fib(n-1);
    int smallOutput2=fib(n-2);
    int Output=smallOutput1+smallOutput2;
    return Output;
}
int main()
{
    int n;
    cin>>n;
    int output=fib(n);
    cout<<output<<endl;
    return 0;
}