#include<iostream>
using namespace std;
int add(int n){
    int ans=0;
    for (int i =1 ; i <=n ; i++)
    {
        ans+=i;
    }
    return ans ;
}


int main()
{
    int n;
    cout<<"Enter the value of c : "<<endl;
    cin>>n;
    cout<<add(n)<<endl;
    return 0;
}