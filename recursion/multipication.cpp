#include<iostream>
using namespace std;
int Multipication(int m,int n){
    if (n==0)
    {
        return 0;
    }
    int smallOutput=Multipication(m,n-1);
    int output=smallOutput+m;
    return output;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int output=Multipication(m,n);
    cout<<output;
    return 0;
}