#include<iostream>
using namespace std;
int add (int a,int b){
    int ans=a+b;
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<add(a,b)<<endl;

    return 0;
}